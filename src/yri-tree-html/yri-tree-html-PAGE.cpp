
/**
 * @AUTEUR: Pr. Prof. Dr.-Ing. XAVIER NOUNDOU
 *
 * 		yri-tree-html-PAGE.cpp
 */


#include "yri-tree-html-PAGE.hpp"


#include "yri-tree-html-PAGE-button.hpp"

#include "yri-tree-html-PAGE-text-section.hpp"

#include "yri-tree-html-PAGE-menu-bar-headers.hpp"


#include <QtCore/QDebug>

#include <QtCore/QMapIterator>

#include <QtCore/QVector>



QString YRITreeHTMLPage::generate_html_text_description()
{
    QString YRI_TO_EXPORT___web_dsl_nine_Zero_open_template_file_css =
        YERITH_WEB_PAGES_GENERATOR_MAIN::YRI_web_dsl_nine_Zero_open_template_file_CSS();

    {

    }



    QString YRI_TO_EXPORT___web_dsl_nine_zero_open_template_file_hpp =
                YERITH_WEB_PAGES_GENERATOR_MAIN::YRI_web_dsl_nine_Zero_open_template_file_HPP();

    {
        YRI_TO_EXPORT___web_dsl_nine_zero_open_template_file_hpp
            .replace("YRI_TEMPLATE_DSL_CSS_FILE",
                      Get_STYLESHEET_Specification_STRING());


        YRI_TO_EXPORT___web_dsl_nine_zero_open_template_file_hpp
            .replace("YRI_TEMPLATE_DSL_Page_title",
                      Get__html_page_title());


        YRI_TO_EXPORT___web_dsl_nine_zero_open_template_file_hpp
            .replace("YRI_TEMPLATE_DSL_Page_Body_CONTENT",
                      GET_htlm_PAGE_body_Content_STRING());
    }

//    QDEBUG_STRING_OUTPUT_2("YRI_TO_EXPORT___web_dsl_nine_zero_open_template_file_hpp",
//                            YRI_TO_EXPORT___web_dsl_nine_zero_open_template_file_hpp);


    QString YRI_TO_EXPORT___YRI_web_dsl_nine_Zero_open_template_file_Menu_bar_header_hpp =
        YERITH_WEB_PAGES_GENERATOR_MAIN::YRI_web_dsl_nine_Zero_open_template_file_Menu_bar_header_HPP();

    {
        YRI_TO_EXPORT___YRI_web_dsl_nine_Zero_open_template_file_Menu_bar_header_hpp
            .replace("YRI_TEMPLATE_DSL_Page_Table_Menu_Bar",
                      Get_header_menu_bar___STRING_CONTENT());

        YRI_CPP_UTILS::YRI_WEB_DSL_NINE_ZERO_OPEN_TEMPLATE_FILE_menu_bar___HPP
            = YRI_TO_EXPORT___YRI_web_dsl_nine_Zero_open_template_file_Menu_bar_header_hpp;
    }


    return YRI_TO_EXPORT___web_dsl_nine_zero_open_template_file_hpp;
}


QString YRITreeHTMLPage::GET_htlm_PAGE_body_Content_STRING()
{
    QString php_page_header_menu_content_STRING;


    QString html_page_body_content_STRING;


    QList<YRITreeHTMLPageBUTTON *> *a_web_page_Current_Button___LIST = 0;

    if (0 != _main_generator_pointer)
    {
        a_web_page_Current_Button___LIST =
                    _main_generator_pointer->Get___web_page_Current_Button___LIST();
    }


    QMap<uint, YRITreeHTMLNode *> children_HTML_Page_ID___To___children_nodes = get_children_NODES();

    QMapIterator<uint, YRITreeHTMLNode *> it(children_HTML_Page_ID___To___children_nodes);

    uint next_html_node_child_ID = 0;

    YRITreeHTMLNode *next_html_node_child = 0;

    QString dbgQString;


//    qDebug() << "GET_htlm_PAGE_body_Content_STRING; size of get_children_NODES() : "
//             << children_HTML_Page_ID___To___children_nodes.size();

    YRITreeHTMLPageBUTTON *a_button = 0;

    if (0 != a_web_page_Current_Button___LIST)
    {
        for (uint i = 0; i < a_web_page_Current_Button___LIST->size(); ++i)
        {
            a_button = a_web_page_Current_Button___LIST->at(i);

            if (0 != a_button)
            {
                dbgQString = a_button->generate_html_text_description();

                html_page_body_content_STRING
                    .append(dbgQString);

                //QDEBUG_STRING_OUTPUT_2("dbgQString-1", dbgQString);

                dbgQString = a_button->generate_CSS_File_Content_STRING();

                //QDEBUG_STRING_OUTPUT_2("dbgQString-2", dbgQString);
            }
        }
    }


    while (it.hasNext())
    {
        it.next();

        next_html_node_child_ID = it.key();

        next_html_node_child = it.value();


        Q_ASSERT_X(next_html_node_child_ID > 0,
                   "GET_htlm_PAGE_body_Content_STRING()",
                   "next_html_node_child_ID ('HTML page node ID') <= 0");


        if (0 != next_html_node_child)
        {
            YRITreeHTMLPageMenuBarHeaders *a_menu_bar_header_Child = 0;

            a_menu_bar_header_Child = dynamic_cast<YRITreeHTMLPageMenuBarHeaders *>(next_html_node_child);

            if (0 != a_menu_bar_header_Child)
            {
                php_page_header_menu_content_STRING =
                    a_menu_bar_header_Child->generate_html_text_description();

                if (! php_page_header_menu_content_STRING.isEmpty())
                {
//                    QDEBUG_STRING_OUTPUT_2("php_page_header_menu_content_STRING",
//                                            php_page_header_menu_content_STRING);

                    Set_header_menu_bar___STRING_CONTENT(php_page_header_menu_content_STRING);
                }
            }
            else
            {
//                QDEBUG_STRING_OUTPUT_1("0 == a_menu_bar_header_Child | html_page_body_content_STRING");

                html_page_body_content_STRING
                    .append(QString("%1")
                            .arg(next_html_node_child
                                    ->generate_html_text_description()));
            }
        }
    }


    return html_page_body_content_STRING;
}


void YRITreeHTMLPage::
        get_pages_html_node_ID_in_HEADER_MENU_BAR(QList<QString> &header_menu_bar)
{
    header_menu_bar.clear();

    if (0 != _header_menu_bar)
    {
        _header_menu_bar->Get_pages_sections(header_menu_bar);
    }
}


void YRITreeHTMLPage::add_An_HTML_Page_Text_SECTION(QString                        a_divVariable,
                                                    YRITreeHTMLPageTextSECTION    *a_html_page_Text_Section)
{
    if (! a_divVariable.isEmpty()    &&
          0 != a_html_page_Text_Section)
    {
        _divVariable__TO____html_page_Text_SECTIONS
                .insert(a_divVariable,
                        a_html_page_Text_Section);
    }
}


YRITreeHTMLPageTextSECTION *YRITreeHTMLPage::get_HTML_page_Text_SECTIONS(QString a_divVariable)
{
    YRITreeHTMLPageTextSECTION *searchedForHTMLPage_textSection = 0;

    if (a_divVariable.isEmpty())
    {
        return 0;
    }


    searchedForHTMLPage_textSection =
        _divVariable__TO____html_page_Text_SECTIONS.value(a_divVariable);


    if (0 == searchedForHTMLPage_textSection)
    {
        searchedForHTMLPage_textSection = new YRITreeHTMLPageTextSECTION(this);

        add_child_NODE(searchedForHTMLPage_textSection);

        add_An_HTML_Page_Text_SECTION(a_divVariable,
                                      searchedForHTMLPage_textSection);
    }


    return searchedForHTMLPage_textSection;
}







