/**
 * @AUTEUR: Pr. Prof. Dr.-Ing. XAVIER NOUNDOU
 *
 * 		YERITH_WEB_PAGES_GENERATOR_MAIN.hpp
 */


#include "YERITH_WEB_PAGES_GENERATOR_MAIN.hpp"


#include "yri-tree-html/yri-tree-html-PAGE-text-section.hpp"

#include "yri-tree-html/yri-tree-html-PAGE-menu-bar-headers.hpp"


#include "utils/YRI_CPP_UTILS.hpp"


#include "yri-tree-html/yri-tree-html-PAGE-button.hpp"

#include "yri-tree-html/yri-tree-html-node.hpp"

#include "yri-tree-html/yri-tree-html-PAGE.hpp"



#include <QtCore/QDir>

#include <QtCore/QFile>

#include <QtCore/QMapIterator>

#include <QtCore/QDebug>





QString YERITH_WEB_PAGES_GENERATOR_MAIN::YRI_web_dsl_nine_Zero_open_template_file_CSS()
{
    QFile A_TEMPLATE_PAGE_CSS_STYLESHEET_FILE(file___YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_CSS);

    //      qDebug() << "++ 1. YRI_CPP_UTILS::YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_CSS: "
    //                               << YRI_CPP_UTILS::YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_CSS;

    YRI_CPP_UTILS::YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_CSS.clear();

    YRI_CPP_UTILS::YERITH_READ_FILE_CONTENT(A_TEMPLATE_PAGE_CSS_STYLESHEET_FILE,
                                            YRI_CPP_UTILS::YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_CSS);

    //      qDebug() << "++ 2. YRI_CPP_UTILS::YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_HPP: "
    //                               << YRI_CPP_UTILS::YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_HPP;

    if (!A_TEMPLATE_PAGE_CSS_STYLESHEET_FILE.open(QFile::ReadOnly))
    {
        QString errMsg("YERITH_WEB_PAGES_GENERATOR_MAIN::YRI_web_dsl_nine_Zero_open_template_file_CSS: ");

        errMsg.append(" Couldn't open a template file : ")
        	  .append(file___YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_CSS)
			  .append(" . ) !\n\n");

        qDebug() << errMsg;

        return YRI_CPP_UTILS::EMPTY_STRING;
    }

//          qDebug() << "++ 3. YRI_CPP_UTILS::YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_CSS: "
//                           << YRI_CPP_UTILS::YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_CSS;

    return YRI_CPP_UTILS::YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_CSS;
}



QString YERITH_WEB_PAGES_GENERATOR_MAIN::YRI_web_dsl_nine_Zero_open_template_file_HPP()
{
    QFile a_template_HEADER_FILE_runtime_monitor(file___YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_HPP);

    //      qDebug() << "++ 1. YRI_CPP_UTILS::YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_HPP: "
    //                               << YRI_CPP_UTILS::YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_HPP;

    YRI_CPP_UTILS::YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_HPP.clear();

    YRI_CPP_UTILS::YERITH_READ_FILE_CONTENT(a_template_HEADER_FILE_runtime_monitor,
                                            YRI_CPP_UTILS::YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_HPP);

    //      qDebug() << "++ 2. YRI_CPP_UTILS::YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_HPP: "
    //                               << YRI_CPP_UTILS::YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_HPP;

    if (!a_template_HEADER_FILE_runtime_monitor.open(QFile::ReadOnly))
    {
        QString errMsg("YERITH_WEB_PAGES_GENERATOR_MAIN::YRI_web_dsl_nine_Zero_open_template_file_HPP: ");

        errMsg.append(" Couldn't open a template file : ")
        	  .append(file___YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_HPP)
			  .append(" . ) !\n\n");

        qDebug() << errMsg;

        return YRI_CPP_UTILS::EMPTY_STRING;
    }

//          qDebug() << "++ 3. YRI_CPP_UTILS::YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_HPP: "
//                           << YRI_CPP_UTILS::YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_HPP;

    return YRI_CPP_UTILS::YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_HPP;
}



QString YERITH_WEB_PAGES_GENERATOR_MAIN::YRI_web_dsl_nine_Zero_open_template_file_Menu_bar_header_HPP()
{
    QFile a_template_HEADER_FILE_runtime_monitor(file___YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_MENU_BAR_FILE_PhP);

//          qDebug() << "++ 1. YRI_CPP_UTILS::YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_menu_bar___HPP: "
//                                   << YRI_CPP_UTILS::YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_menu_bar___HPP;

    YRI_CPP_UTILS::YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_menu_bar___HPP.clear();

    YRI_CPP_UTILS::YERITH_READ_FILE_CONTENT(a_template_HEADER_FILE_runtime_monitor,
                                            YRI_CPP_UTILS::YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_menu_bar___HPP);

//          qDebug() << "++ 2. YRI_CPP_UTILS::YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_menu_bar___HPP: "
//                                   << YRI_CPP_UTILS::YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_menu_bar___HPP;

    if (!a_template_HEADER_FILE_runtime_monitor.open(QFile::ReadOnly))
    {
        QString errMsg("YERITH_WEB_PAGES_GENERATOR_MAIN::YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_menu_bar___HPP: ");

        errMsg.append(" Couldn't open a template file : ")
        	  .append(file___YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_MENU_BAR_FILE_PhP)
			  .append(" . ) !\n\n");

        qDebug() << errMsg;

        return YRI_CPP_UTILS::EMPTY_STRING;
    }

//          qDebug() << "++ 3. YRI_CPP_UTILS::YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_menu_bar___HPP: "
//                           << YRI_CPP_UTILS::YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_menu_bar___HPP;

    return YRI_CPP_UTILS::YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_menu_bar___HPP;
}



void YERITH_WEB_PAGES_GENERATOR_MAIN::Generate__ALL__HTML__related_Web_PAGES(QString directory_folder)
{
    QDir a_content_web_pages_folder_directorate("");

    bool a_content_web_pages_folder_directorate_CREATED =
            a_content_web_pages_folder_directorate.mkpath(directory_folder);


    if (! a_content_web_pages_folder_directorate_CREATED)
    {
        qDebug() << "YERITH_WEB_PAGES_GENERATOR_MAIN::Generate__ALL__HTML__related_Web_PAGES : \n\t"
                 << "Couldn't create a folder to place website source files.";

        return ;
    }


    qDebug() << "directory_folder: "
             << directory_folder;


    QString Current_html_page_content_STRING;


    QMapIterator<YRITreeHTMLNode *, YRITreeHTMLNode *> it(_webhtmlpageNODE__To__children_NODES);

    YRITreeHTMLNode *next_html_node = 0;

    YRITreeHTMLPage *next_html_PAGE = 0;


//    qDebug() << "_webhtmlpageNODE__To__children_NODES->size() : "
//             << QString::number(_webhtmlpageNODE__To__children_NODES.size());


    while (it.hasNext())
    {
        it.next();

        next_html_node = it.key();

        if (0 != next_html_node)
        {
//            qDebug() << "next_html_node->get_html_node_ID() : "
//                     << QString::number(next_html_node->get_html_node_ID());

            if (0 == next_html_node->get_html_node_ID())
            {
                continue;
            }


            next_html_PAGE = YRI_CPP_UTILS::is_instance_of_TREE_HTML_PAGE(next_html_node);


            if (0 != next_html_PAGE)
            {
                Current_html_page_content_STRING =
                    next_html_PAGE->generate_html_text_description();


                YRI_generate_HTML_web_source_files__AND__SAVE__TO__DISK
                    (QString("%1/YRI_TEMPLATE_DSL_Page_Header_Menu.php")
                       .arg(directory_folder),
                            YRI_CPP_UTILS::YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_menu_bar___HPP);


                YRI_generate_HTML_web_source_files__AND__SAVE__TO__DISK
                    (QString("%1/%2.php")
                       .arg(directory_folder,
                            next_html_PAGE->Get__html_page_name()),
                    Current_html_page_content_STRING);
            }
        }
    }
}


void YERITH_WEB_PAGES_GENERATOR_MAIN::PROCESS___comments(int     a_line_number,
                                                         QString thisline_comment_QSTRING)
{
    //qDebug() << "YERITH_WEB_PAGES_GENERATOR_MAIN::PROCESS___comments";

    if (a_line_number >= 1)
    {
        YRITreeHTMLPage *a_current_HTML_PAGE =
            _webhtmlpageFileNAME__To__web_html_pageDATASTRUCTURE
                .value(_current_processed_HTML_Page);

        if (!_current_processed_HTML_Page.isEmpty() &&
            0 == a_current_HTML_PAGE)
        {
//            qDebug() << "YERITH_WEB_PAGES_GENERATOR_MAIN::PROCESS___comments : (0 == a_current_HTML_PAGE)";

            a_current_HTML_PAGE = new YRITreeHTMLPage;

            SET___webhtmlpageFileNAME(_current_processed_HTML_Page,
                                      a_current_HTML_PAGE);
        }

        if (0 != a_current_HTML_PAGE)
        {
            a_current_HTML_PAGE
                ->SET_html_Page_Line_Comments(a_line_number,
                                              thisline_comment_QSTRING);

//            qDebug() << "YERITH_WEB_PAGES_GENERATOR_MAIN::PROCESS___comments"
//                     << QString("%1 | %2 : %3")
//                         .arg(a_current_HTML_PAGE->Get__html_page_name(),
//                              QString::number(a_line_number),
//                              thisline_comment_QSTRING);
        }
    }
}


void YERITH_WEB_PAGES_GENERATOR_MAIN::PROCESS___start_input(QString webPagesGeneratorMAIN_specification_name)
{
    YRITreeHTMLNode::set__main_generator_pointer(this);

    SET___this_GENERATOR_specification_NAME(webPagesGeneratorMAIN_specification_name);

    save_yri_SOURCE_FILES("from_cpp.txt",
                           webPagesGeneratorMAIN_specification_name.trimmed(),
                           false);
}


void YERITH_WEB_PAGES_GENERATOR_MAIN::PROCESS___yri_html_web_html_page__MENU_BAR_link_string__spec(QString html_page_MENU_BAR_link_string)
{
    QString A_html_page_MENU_BAR_link_string =
                YRI_CPP_UTILS::remove_String_Quotes(html_page_MENU_BAR_link_string);

//    QDEBUG_STRING_OUTPUT_2("A_html_page_MENU_BAR_link_string",
//                            A_html_page_MENU_BAR_link_string);

    Set_current_processed_HTML_Page_MENU_BAR_link_string(A_html_page_MENU_BAR_link_string);


    YRITreeHTMLPage *a_html_page
        = _webhtmlpageFileNAME__To__web_html_pageDATASTRUCTURE
            .value(_current_processed_HTML_Page);


    if (0 != a_html_page)
    {
        if (! A_html_page_MENU_BAR_link_string.isEmpty())
        {
            a_html_page->SET__html_page_MENU_BAR_link_string(A_html_page_MENU_BAR_link_string);
        }
        else
        {
            a_html_page->SET__html_page_MENU_BAR_link_string(a_html_page->Get__html_page_title());
        }
    }
}


void YERITH_WEB_PAGES_GENERATOR_MAIN::PROCESS__VARIABLE_YRI_PARAGRAPH_creation_DStructure(QString a_variable_paragraph)
{
//    QDEBUG_STRING_OUTPUT_2("a_variable_paragraph", a_variable_paragraph);

    Set_current_processed_HTML_Page_Current_DIVISION_variable_STRING(a_variable_paragraph);


    YRITreeHTMLPage *a_html_page
        = _webhtmlpageFileNAME__To__web_html_pageDATASTRUCTURE
            .value(_current_processed_HTML_Page);


    if (0 == a_html_page)
    {
        return ;
    }


    if (! a_variable_paragraph.isEmpty())
    {
        YRITreeHTMLPageTextSECTION *a_HTMLPageTextSECTION =
                a_html_page
                    ->get_HTML_page_Text_SECTIONS(_current_processed_HTML_Page_Current_DIVISION_variable_STRING);

        if (0 != a_HTMLPageTextSECTION)
        {
            a_HTMLPageTextSECTION
                ->SET__containing_Pointer_Variable_Name_in_HTML_Page(a_variable_paragraph);


            a_HTMLPageTextSECTION
                ->SET__html_page_text_section_Title_STRING
                    (_current_processed_HTML_Page_Current_DIVISION__text_section_Title_STRING);


            a_HTMLPageTextSECTION
                ->SET__html_page_text_section_HEADER_size
                    (_current_processed_HTML_Page_Current_DIVISION__text_section_HEADER_size);
        }

    }
}


void YERITH_WEB_PAGES_GENERATOR_MAIN::
            PROCESS___yri_html_page_text_SECTION_BodY_TEXTSPECIFICATION_spec_FONT_SIZE(QString a_font_size)
{
    YRITreeHTMLPage *a_html_page
        = _webhtmlpageFileNAME__To__web_html_pageDATASTRUCTURE
            .value(_current_processed_HTML_Page);


    if (0 == a_html_page)
    {
        return ;
    }


    YRITreeHTMLPageTextSECTION *a_HTMLPageTextSECTION =
        a_html_page->get_HTML_page_Text_SECTIONS(_current_processed_HTML_Page_Current_DIVISION_variable_STRING);


    if (0 != a_HTMLPageTextSECTION)
    {
        a_HTMLPageTextSECTION->SET__yri_font_size(a_font_size);

//        QDEBUG_STRING_OUTPUT_2("a_font_size", a_font_size);
    }
}


void YERITH_WEB_PAGES_GENERATOR_MAIN::
            PROCESS___yri_html_page_text_SECTION_BodY_TEXTSPECIFICATION_spec_DIV_BOX_WIDTH(QString a_div_BOX_WiDth,
                                                                                           QString a_unit_of_measure_specification)
{
    YRITreeHTMLPage *a_html_page
        = _webhtmlpageFileNAME__To__web_html_pageDATASTRUCTURE
            .value(_current_processed_HTML_Page);


    if (0 == a_html_page)
    {
        return ;
    }


    YRITreeHTMLPageTextSECTION *a_HTMLPageTextSECTION =
        a_html_page->get_HTML_page_Text_SECTIONS(_current_processed_HTML_Page_Current_DIVISION_variable_STRING);


    if (0 != a_HTMLPageTextSECTION)
    {
        a_HTMLPageTextSECTION->SET__yri_Div_Box___WiDth(a_div_BOX_WiDth);

        a_HTMLPageTextSECTION->SET__yri_Div_Box___Unit_of_measure_specification(a_unit_of_measure_specification);


//        QDEBUG_STRING_OUTPUT_2("a_div_BOX_WiDth", a_div_BOX_WiDth);
//
//        QDEBUG_STRING_OUTPUT_2("a_unit_of_measure_specification", a_unit_of_measure_specification);
    }
}


void YERITH_WEB_PAGES_GENERATOR_MAIN::
            PROCESS___yri_html_page_text_SECTION_BodY_TEXTSPECIFICATION_spec_DIV_BOX_TEXT(QString a_Div_BOX_text)
{
    YRITreeHTMLPage *a_html_page
        = _webhtmlpageFileNAME__To__web_html_pageDATASTRUCTURE
            .value(_current_processed_HTML_Page);


    if (0 == a_html_page)
    {
        return ;
    }


    YRITreeHTMLPageTextSECTION *a_HTMLPageTextSECTION =
            a_html_page->get_HTML_page_Text_SECTIONS(_current_processed_HTML_Page_Current_DIVISION_variable_STRING);


    if (0 != a_HTMLPageTextSECTION)
    {
        a_HTMLPageTextSECTION->SET__html_page_text_section_Content_STRING(a_Div_BOX_text);

//        QDEBUG_STRING_OUTPUT_2("a_Div_BOX_text", a_Div_BOX_text);
    }
}


void YERITH_WEB_PAGES_GENERATOR_MAIN::
            PROCESS___yri_html_page_text_SECTION_BodY_SPECSIZES_spec()
{
//    YRITreeHTMLPage *a_html_page
//        = _webhtmlpageFileNAME__To__web_html_pageDATASTRUCTURE
//            .value(_current_processed_HTML_Page);
//
//
//    if (0 == a_html_page)
//    {
//        return ;
//    }
//
//    YRITreeHTMLPageTextSECTION *a_HTMLPageTextSECTION = a_html_page->get_HTML_page_Text_SECTIONS();
//
//    if (0 == a_HTMLPageTextSECTION)
//    {
//        return ;
//    }
//
//    QString containing_Pointer_Variable_Name_in_HTML_Page =
//                    a_HTMLPageTextSECTION->Get__containing_Pointer_Variable_Name_in_HTML_Page();
}


void YERITH_WEB_PAGES_GENERATOR_MAIN::PROCESS___yri_html_page_text_SECTION(QString htmlTextSectionTitle,
                                                                           QString htmlTitleHeaderSize_Type)
{
//    QDEBUG_STRING_OUTPUT_2("htmlTextSectionTitle",
//                           htmlTextSectionTitle);
//
//
//    QDEBUG_STRING_OUTPUT_2("htmlTitleHeaderSize_Type",
//                           htmlTitleHeaderSize_Type);


    YRITreeHTMLPage *a_html_page
        = _webhtmlpageFileNAME__To__web_html_pageDATASTRUCTURE
            .value(_current_processed_HTML_Page);


    if (0 == a_html_page)
    {
        return ;
    }

    uint A_text_section_HEADER_size = htmlTitleHeaderSize_Type.toUInt();

    QString newHtmlTextSectionTitle = YRI_CPP_UTILS::remove_String_Quotes(htmlTextSectionTitle);


    if (A_text_section_HEADER_size > 0)
    {
        _current_processed_HTML_Page_Current_DIVISION__text_section_HEADER_size = A_text_section_HEADER_size;
    }
    else
    {
        _current_processed_HTML_Page_Current_DIVISION__text_section_HEADER_size = 2;
    }


    _current_processed_HTML_Page_Current_DIVISION__text_section_Title_STRING = newHtmlTextSectionTitle;
}


void YERITH_WEB_PAGES_GENERATOR_MAIN::PROCESS___yri_html_web_html_page_spec(QString htmlPageFileNAME,
                                                                            QString htmlPageTitle)
{
    QString newHtmlPageTitle = YRI_CPP_UTILS::remove_String_Quotes(htmlPageTitle);


    Set_current_processed_HTML_Page_TItle(newHtmlPageTitle);

    Set_current_processed_HTML_Page(htmlPageFileNAME);


    YRITreeHTMLPage *a_html_page
        = _webhtmlpageFileNAME__To__web_html_pageDATASTRUCTURE
            .value(_current_processed_HTML_Page);

    if (0 == a_html_page)
    {
        a_html_page = new YRITreeHTMLPage(htmlPageFileNAME,
                                          newHtmlPageTitle);
    }


    SET___webhtmlpageFileNAME(htmlPageFileNAME,
                              a_html_page);
}


void YERITH_WEB_PAGES_GENERATOR_MAIN::
        PROCESS___yri_html_web_html_page_menu_bar_headers_BODY_spec(QString htmlPageMenuBarHeaders__POSITION)
{
    htmlPageMenuBarHeaders__POSITION =
            htmlPageMenuBarHeaders__POSITION.trimmed().remove("'");


    qDebug() << QString("_current_processed_HTML_Page : %1")
             .arg(_current_processed_HTML_Page);

    qDebug() << QString("_header_menu_bar_SPECIFICATION_name_in_file : %1")
             .arg(_header_menu_bar_SPECIFICATION_name_in_file);

    qDebug() << QString("htmlPageMenuBarHeaders__POSITION : %1")
             .arg(htmlPageMenuBarHeaders__POSITION);


    YRITreeHTMLPageMenuBarHeaders *a_web_page_menu_bar_Header =
        new YRITreeHTMLPageMenuBarHeaders(htmlPageMenuBarHeaders__POSITION);


    Q_ASSERT_X(!_current_processed_HTML_Page.isEmpty(),
                "PROCESS___yri_html_web_html_page_menu_bar_headers_BODY_spec",
                "_current_processed_HTML_Page : name of current processed HTML page not yet set !");


    if (!_current_processed_HTML_Page.isEmpty())
    {
        YRITreeHTMLPage *a_current_processed_HTML_Page
                            = _webhtmlpageFileNAME__To__web_html_pageDATASTRUCTURE
                                .value(_current_processed_HTML_Page);

        if (! _current_processed_HTML_Page.isEmpty() &&
            0 == a_current_processed_HTML_Page)
        {
            a_current_processed_HTML_Page = new YRITreeHTMLPage;

            SET___webhtmlpageFileNAME(_current_processed_HTML_Page,
                                      a_current_processed_HTML_Page);
        }

        if (0 != a_current_processed_HTML_Page)
        {
            a_current_processed_HTML_Page->add_child_NODE(a_web_page_menu_bar_Header);

            SET___web_page_menu_bar_Header(a_web_page_menu_bar_Header);

            if (YRI_CPP_UTILS::isEqualsCaseInsensitive
                                (a_current_processed_HTML_Page->Get__html_page_name(),
                                 _current_processed_HTML_Page))
            {
                _webhtmlpageID__To__web_html_pages_nodes
                    .insert(_current_processed_HTML_Page,
                            a_web_page_menu_bar_Header);

                qDebug() << QString("Web page : %1 | a_web_page_menu_bar_Header-position : %2")
                             .arg(_current_processed_HTML_Page,
                                  QString::number(a_web_page_menu_bar_Header->Get_menu_bar_position_web_page()));
            }
        }
    }
}


void YERITH_WEB_PAGES_GENERATOR_MAIN::
                PROCESS___yri_html_page___CURRENT___Widget_SET__button_text(QString button_for_text)
{
    if (0 != _web_page_Current_PROCESSED_button)
    {
        button_for_text.replace("\\n", "<br/>");

        _web_page_Current_PROCESSED_button
            ->SET__button_text(button_for_text);
    }
}


void YERITH_WEB_PAGES_GENERATOR_MAIN::
                PROCESS___yri_html_page___CURRENT___Widget_button__SET_X(QString xS)
{
    if (0 != _web_page_Current_PROCESSED_button)
    {
        QString x = xS.replace("'", "");

        _web_page_Current_PROCESSED_button
            ->SET__yri_button_X_position_geometry(x);

//        _web_page_Current_PROCESSED_button
//            ->print_debugging();
    }
}


void YERITH_WEB_PAGES_GENERATOR_MAIN::
                PROCESS___yri_html_page___CURRENT___Widget_button__SET_Y(QString yS)
{
    if (0 != _web_page_Current_PROCESSED_button)
    {
        //QDEBUG_STRING_OUTPUT_2("PROCESS___yri_html_page___CURRENT___Widget_button__SET_Y", y);
        QString y = yS.replace("'", "");

        _web_page_Current_PROCESSED_button
            ->SET__yri_button_Y_position_geometry(y);
    }
}


void YERITH_WEB_PAGES_GENERATOR_MAIN::
                PROCESS___yri_html_page___CURRENT___Widget_button__SET_Width(QString widthS)
{
    if (0 != _web_page_Current_PROCESSED_button)
    {
        QString width = widthS.replace("'", "");

        _web_page_Current_PROCESSED_button
            ->SET__yri_button_WIDTH(width);
    }
}


void YERITH_WEB_PAGES_GENERATOR_MAIN::
                PROCESS___yri_html_page___CURRENT___Widget_button__SET_Height(QString heightS)
{
    if (0 != _web_page_Current_PROCESSED_button)
    {
        QString height = heightS.replace("'", "");

        _web_page_Current_PROCESSED_button
            ->SET__yri_button_HEIGTH(height);

        //QDEBUG_STRING_OUTPUT_1("text debugging !");

//        _web_page_Current_PROCESSED_button->print_debugging();
    }
}


void YERITH_WEB_PAGES_GENERATOR_MAIN::
        PROCESS_Current__yri_html_page_Widget_button()
{
    if (0 == _web_page_Current_Button___LIST)
    {
        _web_page_Current_Button___LIST = new QList<YRITreeHTMLPageBUTTON *>();
    }


    if (! YRI_CPP_UTILS::isEqualsCaseInsensitive(_current_processed_HTML_Page___CSS_file_name, _current_processed_HTML_Page))
    {
        _current_processed_HTML_Page___CSS_file_name = _current_processed_HTML_Page;
    }


    YRITreeHTMLPage *_current_processed_HTML_Page_DS =
        _webhtmlpageFileNAME__To__web_html_pageDATASTRUCTURE.value(_current_processed_HTML_Page);


    YRITreeHTMLPageBUTTON *a_button = new YRITreeHTMLPageBUTTON(_current_processed_HTML_Page_DS);


    _web_page_Current_Button___LIST->append(a_button);


//    QDEBUG_STRING_OUTPUT_2_N("PROCESS_Current__yri_html_page_Widget_button | size",
//                              _web_page_Current_Button___LIST->size());


    _web_page_Current_PROCESSED_button = a_button;
}


/**
 * DO NOT PUT AS inline in header file because of
 * a circular dependency with class 'YRITreeHTMLPageMenuBarHeaders' !
 *
 * File: "src/yri-tree-html/yri-tree-html-PAGE-menu-bar-headers.*pp".
 */

void YERITH_WEB_PAGES_GENERATOR_MAIN::
        PROCESS___yri_html_web_html_page_menu_bar_headers_BODY_element_spec(QString htmlPage_as_menur_bar_linked)
{
    _web_page_menu_bar_Header->Add_pages_section(htmlPage_as_menur_bar_linked);
}



void YERITH_WEB_PAGES_GENERATOR_MAIN::save_yri_SOURCE_FILES(QString a_HTML_web_source_FILE_NAME,
                                                            QString a_HTML_web_source_CONTENT,
                                                            bool    new_line_at_END /* = true */)
{
    QFile out_file_CONTENT(a_HTML_web_source_FILE_NAME.trimmed());

    a_HTML_web_source_CONTENT = a_HTML_web_source_CONTENT.trimmed();


    if (new_line_at_END)
    {
        a_HTML_web_source_CONTENT.append("\n\n");
    }


    out_file_CONTENT.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text);

    out_file_CONTENT.write(a_HTML_web_source_CONTENT.toStdString().c_str());

    out_file_CONTENT.flush();

    out_file_CONTENT.close();
}


QString YERITH_WEB_PAGES_GENERATOR_MAIN::
            YRI_generate_HTML_web_source_files__AND__SAVE__TO__DISK(QString a_HTML_web_source_FILE_NAME,
                                                                    QString a_HTML_web_source_CONTENT)
{
//    QDEBUG_STRING_OUTPUT_2("a_HTML_web_source_FILE_NAME",
//                            a_HTML_web_source_FILE_NAME);

	save_yri_SOURCE_FILES(a_HTML_web_source_FILE_NAME,
						  a_HTML_web_source_CONTENT);

	return a_HTML_web_source_CONTENT;
}


QString YERITH_WEB_PAGES_GENERATOR_MAIN::generate_buttons_CSS___Content(QString directory_folder)
{
    QString header_Content_CSS___File = YRITreeHTMLPageBUTTON::Get___header_Content_CSS_File();

//    qDebug() << "header_Content_CSS___File: "
//             <<  header_Content_CSS___File;

    QString button_page_CSS = QString("%1/%2.css")
                                .arg(directory_folder,
                                     _current_processed_HTML_Page___CSS_file_name);

    save_yri_SOURCE_FILES(button_page_CSS,
                          header_Content_CSS___File);

//    qDebug() << "button_page_CSS: "
//             <<  button_page_CSS;


    return header_Content_CSS___File;
}


void YERITH_WEB_PAGES_GENERATOR_MAIN::
            SET___webhtmlpageFileNAME(QString            A_webhtmlpageFileNAME,
                                      YRITreeHTMLPage   *A_web_html_pageDATASTRUCTURE)
{
    if (0 != A_web_html_pageDATASTRUCTURE)
    {
//        QDEBUG_STRING_OUTPUT_2("SET__html_page_title",
//                                GetCurrent_processed_HTML_Page_TItle());

        A_web_html_pageDATASTRUCTURE->SET__html_page_name(A_webhtmlpageFileNAME);

        A_web_html_pageDATASTRUCTURE
            ->SET__html_page_title(GetCurrent_processed_HTML_Page_TItle());

        _webhtmlpageID__To__web_html_pages_nodes
            .insert(A_web_html_pageDATASTRUCTURE->get_html_node_ID___AS_QString(),
                    A_web_html_pageDATASTRUCTURE);
    }


    _webhtmlpageFileNAME__To__web_html_pageDATASTRUCTURE
        .insert(A_webhtmlpageFileNAME,
                A_web_html_pageDATASTRUCTURE);


    _webhtmlpageNODE__To__children_NODES
        .insert(A_web_html_pageDATASTRUCTURE, 0);
}


void YERITH_WEB_PAGES_GENERATOR_MAIN::
            setCoordinatesXY(YRITreeHTMLNode    *a_node,
                             QPair<int, int>    *a_pair_coordinate)
{
    if (0 != a_node)
    {
        _Webhtmlnode__To__webhtmlpage_absolute_positions.insert(a_node,
                                                                a_pair_coordinate);
    }
}







