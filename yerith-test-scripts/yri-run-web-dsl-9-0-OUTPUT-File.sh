#!/bin/bash
#
# @AUTEUR: Pr. Prof. Dr.-Ing. Xavier Noumbissi Noundou
#
# USAGE="Usage: $(basename $0) [-s] [-p] <-i input.spec_html>"
# -s : simluation of commands on.
# -p : Creates in current PWD : 'Program Working Directory' !
#

#set -x

USAGE="---------------------------------------------------------------------------------
Auteur: Pr. Prof. Dr.-Ing. Xavier Noundou (@YERITH R & D; Yerith.xavier@gmail.com
---------------------------------------------------------------------------------
Usage: $(basename $0) [-s] [-p] [-n] <-i input.spec_html>
  -s : simluation of commands on.
  -n : Doesn't open result in a web browser !
  -p : Creates in current PWD : 'Program Working Directory' !
  -i : .spec_html input file to create web PHP_HTML pages.
  -f : folder where to find all .spec_html files.
---------------------------------------------------------------------------------"

if [ $# -lt 2 ]; then
  echo "$USAGE"
  exit 1
fi

no_web_browser_opening_Flag=
pwdFlag=
iflag=
simflag=


while getopts 'npsf:i:' OPTION
do
  case $OPTION in
		n)	no_web_browser_opening_Flag=1 
		;;
		p)	pwdFlag=1
		;;	
		i)	iflag=1
      	INPUT_SPEC_HTML_FILE="$OPTARG" 
		;;
    s)	simflag=1
        echo "Simulation on"
  	;;
		f)	folder_flag=1
        FOLDER_SPEC_HTML="$OPTARG"
  	;;
    ?)	printf "$USAGE" >&2
        exit 2
		;;
  esac
done
shift $(($OPTIND - 1))


single_file_handling ()
{
	INPUT_SPEC_HTML_FILE=$1

	# Condition returns 'True' if file exists and is executable !
	if [ -x < ${YERITH_WEB_PAGES_GENERATOR_HOME_FOLDER}/yerith-web-pages-generator_comp ]; then
		if [ ! $simflag ]; then
			${YERITH_WEB_PAGES_GENERATOR_HOME_FOLDER}/yerith-web-pages-generator_comp ${INPUT_SPEC_HTML_FILE}
		else
			echo "${YERITH_WEB_PAGES_GENERATOR_HOME_FOLDER}/yerith-web-pages-generator_comp ${INPUT_SPEC_HTML_FILE}"
		fi
	fi
}


if [ ! $iflag ] && [ ! $folder_flag ]; then
	echo "Missing input .spec_html file (OPTION -i) ! or
	folder input (-f) !"
	exit 1
fi


ORIGINAL_FOLDER=$(pwd)


if [ $folder_flag ]; then

	if [ $simflag ]; then
		echo "cd ${FOLDER_SPEC_HTML}"
	fi

	cd ${FOLDER_SPEC_HTML}

	for f in $(dir .); do
		NEXT_FILE_SPEC_HTML="${f}" 
	
		single_file_handling ${NEXT_FILE_SPEC_HTML}
	done
else	
	single_file_handling ${INPUT_SPEC_HTML_FILE}
fi


if [ $iflag ]; then
	Output_Dir=$(cat "${ORIGINAL_FOLDER}/from_cpp.txt")
else
	Output_Dir=$(cat "from_cpp.txt")
fi


if [ ! $simflag ]; then
	rm -rf ${HOME}/public_html/${Output_Dir}
	mkdir -p ${HOME}/public_html/${Output_Dir}
	cp -r ${Output_Dir}/* ${HOME}/public_html/${Output_Dir}
else
	echo "rm -rf ${HOME}/public_html/${Output_Dir}"
	echo "mkdir -p ${HOME}/public_html/${Output_Dir}"
	echo "cp -r ${Output_Dir}/* ${HOME}/public_html/${Output_Dir}"
fi


if [ $folder_flag ]; then
	cd ${ORIGINAL_FOLDER}
fi


if [ $no_web_browser_opening_Flag ]; then
	echo "NO OPENING OF WEB BROWSER now !"
	exit 0
fi


if [ ! $simflag ]; then
	firefox --new-tab "127.0.0.1/~$USER/${Output_Dir}/index.php" &
else
	echo "firefox --new-tab "127.0.0.1/~$USER/${Output_Dir}/index.php" &"
fi


