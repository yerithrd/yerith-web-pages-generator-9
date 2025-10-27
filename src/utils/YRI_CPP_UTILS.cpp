/*
 * YRI_CPP_UTILS.CPP
 *
 *      Author: Pr.  Prof.  Dr.-Ing. Xavier Noundou
 */

#include "YRI_CPP_UTILS.hpp"


#include "yri-tree-html/yri-tree-html-PAGE.hpp"


#include <QtCore/QDebug>
#include <QtCore/QProcess>


QString YRI_CPP_UTILS::YERITH_WEB_PAGES_GENERATOR_Env_VARIABLE_Output_Dir = "";

QString YRI_CPP_UTILS::YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_menu_bar___HPP = "";

QString YRI_CPP_UTILS::YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_HPP = "";

QString YRI_CPP_UTILS::YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_CSS = "";


const QString YRI_CPP_UTILS::EMPTY_STRING("");



QString YRI_CPP_UTILS::remove_String_Quotes(QString a_single_quoted_String)
{
    QString result_non_Signle_QUOTED_string = a_single_quoted_String;

    result_non_Signle_QUOTED_string.remove(0, 1);
    result_non_Signle_QUOTED_string.remove(result_non_Signle_QUOTED_string.length() - 1, 1);


    return result_non_Signle_QUOTED_string;
}


YRITreeHTMLPage *YRI_CPP_UTILS::is_instance_of_TREE_HTML_PAGE(YRITreeHTMLNode *a_next_html_node)
{
    return dynamic_cast<YRITreeHTMLPage *>(a_next_html_node);
}



void YRI_CPP_UTILS::YERITH_READ_FILE_CONTENT(QFile &file,
                                            QString &fileContentVar)
{
    if (file.open(QIODevice::ReadOnly))
    {
        QTextStream stream(&file);

        QString line;

        do
        {
            line = stream.readLine().trimmed();

            fileContentVar.append(line).append("\n");
        }
        while (!line.isNull());

        file.close();
    }
}


void YRI_CPP_UTILS::qDebugStrings(const QString &firstString,
                                 const QStringList &aStringList)
{
    qDebug() << QString("++ %1: ").arg(firstString) << aStringList;
}


void YRI_CPP_UTILS::qDebugStrings(const QString &firstString,
                                 const QString &secondString
                                 /* = YerothUtils::EMPTY_STRING */)
{
    qDebug() << QString("++ %1: %2").arg(firstString, secondString);
}


int
YRI_CPP_UTILS::start_PROCESS_AND_READ_PROCESS_output_INTO_FILE
(const QString &program_executable_location_full_path,
 const QString &output_file_full_path,
 const QStringList &program_executable_args)
{
    QProcess
    A_YEROTH_PROCESS;

    A_YEROTH_PROCESS.start(program_executable_location_full_path,
                           program_executable_args);

    if (!A_YEROTH_PROCESS.waitForFinished())
    {
        return -1;
    }

    QFile
    tmpFile(output_file_full_path);

    if (tmpFile.open(QFile::WriteOnly))
    {
        tmpFile.write(A_YEROTH_PROCESS.readAllStandardOutput().trimmed());
    }
    else
    {
        return -1;
    }

    int
    output_file_size = tmpFile.size();

    tmpFile.close();

    return output_file_size;
}
