# Makefile

SRC = src

OBJ_DIR = obj

OBJS	= bison.o lex.o yri_main.o \
				${OBJ_DIR}/qrc_yerith-web-pages-generator.o \
				${OBJ_DIR}/yri-tree-html/yri-tree-html-node.o \
				${OBJ_DIR}/yri-tree-html/yri-tree-html-PAGE.o \
				${OBJ_DIR}/yri-tree-html/yri-tree-html-PAGE-button.o \
				${OBJ_DIR}/yri-tree-html/yri-tree-html-PAGE-text-section.o \
				${OBJ_DIR}/yri-tree-html/yri-tree-html-PAGE-menu-bar-headers.o \
				${OBJ_DIR}/utils/YRI_CPP_UTILS.o \
				${OBJ_DIR}/YERITH_WEB_PAGES_GENERATOR_MAIN.o

CC	= g++  

CFLAGS	= -g -O2 -Wall -pedantic \
					-fPIC -Wextra -pipe \
					-D_REENTRANT -DQT_NO_VERSION_TAGGING -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_SQL_LIB -DQT_CORE_LIB \
					-Isrc/utils \
					-Isrc \
					-I/usr/lib/x86_64-linux-gnu \
					-I/usr/lib/x86_64-linux-gnu \
					-I/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++ \
					-I/usr/include/x86_64-linux-gnu/qt5 
					

LINKFLAGS	= -Llib -L/usr/lib/x86_64-linux-gnu -lQt5Sql -lQt5Core
					


yerith-web-pages-generator:		$(OBJS)
		$(CC) -o yerith-web-pages-generator_comp $(OBJS) $(LINKFLAGS) 



${OBJ_DIR}/YERITH_WEB_PAGES_GENERATOR_MAIN.o:		${SRC}/YERITH_WEB_PAGES_GENERATOR_MAIN.cpp
		mkdir -p ${OBJ_DIR}
		$(CC) $(CFLAGS) -c ${SRC}/YERITH_WEB_PAGES_GENERATOR_MAIN.cpp 	-o ${OBJ_DIR}/YERITH_WEB_PAGES_GENERATOR_MAIN.o


${OBJ_DIR}/utils/YRI_CPP_UTILS.o:		${SRC}/utils/YRI_CPP_UTILS.cpp
		mkdir -p ${OBJ_DIR}/utils
		$(CC) $(CFLAGS) -c ${SRC}/utils/YRI_CPP_UTILS.cpp 	-o ${OBJ_DIR}/utils/YRI_CPP_UTILS.o





${OBJ_DIR}/yri-tree-html/yri-tree-html-node.o:		${SRC}/yri-tree-html/yri-tree-html-node.cpp
		mkdir -p ${OBJ_DIR}/yri-tree-html
		$(CC) $(CFLAGS) -c ${SRC}/yri-tree-html/yri-tree-html-node.cpp 	-o ${OBJ_DIR}/yri-tree-html/yri-tree-html-node.o

${OBJ_DIR}/yri-tree-html/yri-tree-html-PAGE.o:		${SRC}/yri-tree-html/yri-tree-html-PAGE.cpp
		mkdir -p ${OBJ_DIR}/yri-tree-html
		$(CC) $(CFLAGS) -c ${SRC}/yri-tree-html/yri-tree-html-PAGE.cpp 	-o ${OBJ_DIR}/yri-tree-html/yri-tree-html-PAGE.o

${OBJ_DIR}/yri-tree-html/yri-tree-html-PAGE-button.o:		${SRC}/yri-tree-html/yri-tree-html-PAGE-button.cpp
		mkdir -p ${OBJ_DIR}/yri-tree-html
		$(CC) $(CFLAGS) -c ${SRC}/yri-tree-html/yri-tree-html-PAGE-button.cpp 	-o ${OBJ_DIR}/yri-tree-html/yri-tree-html-PAGE-button.o

${OBJ_DIR}/yri-tree-html/yri-tree-html-PAGE-text-section.o:		${SRC}/yri-tree-html/yri-tree-html-PAGE-text-section.cpp
		mkdir -p ${OBJ_DIR}/yri-tree-html
		$(CC) $(CFLAGS) -c ${SRC}/yri-tree-html/yri-tree-html-PAGE-text-section.cpp 	-o ${OBJ_DIR}/yri-tree-html/yri-tree-html-PAGE-text-section.o

${OBJ_DIR}/yri-tree-html/yri-tree-html-PAGE-menu-bar-headers.o:		${SRC}/yri-tree-html/yri-tree-html-PAGE-menu-bar-headers.cpp
		mkdir -p ${OBJ_DIR}/yri-tree-html
		$(CC) $(CFLAGS) -c ${SRC}/yri-tree-html/yri-tree-html-PAGE-menu-bar-headers.cpp 	-o ${OBJ_DIR}/yri-tree-html/yri-tree-html-PAGE-menu-bar-headers.o





${OBJ_DIR}/qrc_yerith-web-pages-generator.o: ${OBJ_DIR}/qrc_yerith-web-pages-generator.cpp 
	$(CXX) -c $(CFLAGS) -o ${OBJ_DIR}/qrc_yerith-web-pages-generator.o ${OBJ_DIR}/qrc_yerith-web-pages-generator.cpp

${OBJ_DIR}/qrc_yerith-web-pages-generator.cpp: yerith-web-pages-generator.qrc \
	/usr/lib/qt5/bin/rcc \
	PAGES_TEMPLATE_FILE_PHP_html_css/YRI_TEMPLATE_DSL_CSS_FILE.css 							\
	PAGES_TEMPLATE_FILE_PHP_html_css/YRI_TEMPLATE_DSL_Page_Header_Menu.php 			\
	PAGES_TEMPLATE_FILE_PHP_html_css/yri_website_dsl-9.0-template.php
	/usr/lib/qt5/bin/rcc -name yerith-web-pages-generator yerith-web-pages-generator.qrc -o ${OBJ_DIR}/qrc_yerith-web-pages-generator.cpp


lex.o:		lex.c
		$(CC) $(CFLAGS) -c lex.c -o lex.o

lex.c:		yerith-web-pages-generator.lex
		flex yerith-web-pages-generator.lex
		cp lex.yy.c lex.c

bison.o:	bison.c
		$(CC) $(CFLAGS) -c bison.c -o bison.o

bison.c:	yerith-web-pages-generator.y
		mkdir -p lib ${OBJ_DIR} ${OBJ_DIR}/utils ${OBJ_DIR}/yri-tree-html
		bison -d -v yerith-web-pages-generator.y
		cp yerith-web-pages-generator.tab.c bison.c
		cmp -s yerith-web-pages-generator.tab.h tok.h || cp yerith-web-pages-generator.tab.h tok.h

yri_main.o:		yri_main.cc
		$(CC) $(CFLAGS) -c yri_main.cc -o yri_main.o

lex.o yac.o yri_main.o	: YERITH-WEB-PAGES-GENERATOR_HEADING.h
lex.o yri_main.o		: tok.h



clean:
	rm -rf *_previously*
	rm -f ${OBJ_DIR}/* \
		${OBJ_DIR}/utils/*.o \
		${OBJ_DIR}/yri-tree-html/*.o \
		*.o \
		*~ \
		lex.c \
		lex.yy.c \
		bison.c \
		tok.h \
		yerith-web-pages-generator.tab.c \
		yerith-web-pages-generator.tab.h \
		yerith-web-pages-generator.output

