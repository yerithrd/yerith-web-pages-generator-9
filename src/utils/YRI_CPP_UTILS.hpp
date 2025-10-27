/*
 * YRI_CPP_UTILS.hpp
 *
 *      Author: Pr.  Prof.  Dr.-Ing. Xavier Noundou
 */

#ifndef _YRI_CPP_UTILS_HPP_
#define _YRI_CPP_UTILS_HPP_



#include <algorithm>
using namespace std;

#include <QtCore/QFile>
#include <QtCore/QObject>


#include <cstdlib>


#define YRI_CPP_CLASS_OPERATORS  \
    inline void *operator new[](size_t size){ return calloc(1, size); } \
    inline void *operator new(size_t size){ return calloc(1, size); } \
    inline void operator delete[](void *ptr){ free(ptr); } \
    inline void operator delete[](void *ptr, size_t){ free(ptr); } \
    inline void operator delete(void *ptr){ free(ptr); } \
    inline void operator delete(void *ptr, size_t){ free(ptr); }


class YRITreeHTMLNode;
class YRITreeHTMLPage;


class YRI_CPP_UTILS : public QObject
{
	Q_OBJECT

public:

    YRI_CPP_CLASS_OPERATORS

	inline YRI_CPP_UTILS()
	{
	}

    virtual inline ~YRI_CPP_UTILS()
    {
    }


    static QString remove_String_Quotes(QString a_single_quoted_String);


    static YRITreeHTMLPage *is_instance_of_TREE_HTML_PAGE(YRITreeHTMLNode *a_next_html_node);


    inline static bool isEqualsCaseSensitive(const QString &str1,
                                             const QString &str2)
    {
        return (0 == str1.compare(str2, Qt::CaseSensitive));
    }

    inline static bool isEqualsCaseInsensitive(const QString &str1,
                                               const QString &str2)
    {
        return (0 == str1.compare(str2, Qt::CaseInsensitive));
    }

    static void YERITH_READ_FILE_CONTENT(QFile &file,
                                         QString &fileContentVar);

    static void qDebugStrings(const QString &firstString,
                              const QStringList &aStringList);

    static void qDebugStrings(const QString &firstString,
                              const QString &secondString =
                                              YRI_CPP_UTILS::EMPTY_STRING);


    /**
     * Returns the size of the output file created
     * by execution of the program 'program' !
     */
    static int start_PROCESS_AND_READ_PROCESS_output_INTO_FILE(const QString &
                                                               program_executable_location_full_path,
                                                               const QString &
                                                               output_file_full_path,
                                                               const QStringList &
                                                               program_executable_args);

    /**
     * Returns the size of the output file created
     * by execution of the program 'program' !
     */
    inline static int start_PROCESS_AND_READ_PROCESS_output_INTO_FILE(const QString &
                                                                      program_executable_location_full_path,
                                                                      const QString &
                                                                      program_working_directory_full_path,
                                                                      const QString &
                                                                      output_file_name,
                                                                      const QStringList &
                                                                      program_executable_args)
    {
        return YRI_CPP_UTILS::start_PROCESS_AND_READ_PROCESS_output_INTO_FILE
               (program_executable_location_full_path,
                QString("%1/%2").arg(program_working_directory_full_path,
                                     output_file_name), program_executable_args);
    }


    static QString YERITH_WEB_PAGES_GENERATOR_Env_VARIABLE_Output_Dir;


    static QString YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_menu_bar___HPP;

    static QString YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_HPP;

    static QString YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_CSS;


    static const QString EMPTY_STRING;
};


#define file___YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_HPP	":PAGES_TEMPLATE_FILE_PHP_html_css/yri_website_dsl-9.0-template.php"

#define file___YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_MENU_BAR_FILE_PhP    ":PAGES_TEMPLATE_FILE_PHP_html_css/YRI_TEMPLATE_DSL_Page_Header_Menu.php"

#define file___YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_CSS	":PAGES_TEMPLATE_FILE_PHP_html_css/YRI_TEMPLATE_DSL_CSS_FILE.css"


#define GET_C_STR_FROM_QSTRING(X) X.toStdString().c_str()


#define YRI_QVERIFY2_QSTRING(B, QS) QVERIFY2(B, GET_C_STR_FROM_QSTRING(QS))


#define BOOLEAN_STRING_TRUE "True"

#define BOOLEAN_STRING_FALSE "False"

#define INT_TO_STRING(B) ((0 != B) ? "OUI" : "NON")

#define BOOL_TO_STRING(B) (B ? BOOLEAN_STRING_TRUE : BOOLEAN_STRING_FALSE)


#define QDEBUG_STRING_OUTPUT_1(X) 		YRI_CPP_UTILS::qDebugStrings(X, YRI_CPP_UTILS::EMPTY_STRING)

#define QDEBUG_STRING_OUTPUT_2_BOOL(X, Y) YRI_CPP_UTILS::qDebugStrings(X, BOOL_TO_STRING(Y))

#define QDEBUG_STRING_OUTPUT_2_N(X, Y) 	YRI_CPP_UTILS::qDebugStrings(X, QString::number(Y))

#define QDEBUG_STRING_OUTPUT_2(X, Y) 	YRI_CPP_UTILS::qDebugStrings(X, Y)

#define QDEBUG_QSTRINGLIST_OUTPUT(X, Y) YRI_CPP_UTILS::qDebugStrings(X, Y)


#endif // _YRI_CPP_UTILS_HPP_
