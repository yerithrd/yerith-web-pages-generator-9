
/**
 * @AUTEUR: Pr. Prof. Dr.-Ing. XAVIER NOUNDOU
 *
 * 		yri-tree-html-PAGE-menu-bar-headers.cpp
 */


#include "yri-tree-html-PAGE-menu-bar-headers.hpp"


#include "yri-tree-html/yri-tree-html-PAGE.hpp"


#include <QtCore/QDebug>





QMap<QString, enum WEBbHtmlElementPosition> YRITreeHTMLPageMenuBarHeaders::_STRINGNames___Into___enumWebHtmlPositions;



void YRITreeHTMLPageMenuBarHeaders::initializations(QString a_web_html_element_positionVALUE /* = "" */)
{
    _menu_bar_position_web_page =
            receive_value_converted_Into_WEBbHtmlElementPosition
                (a_web_html_element_positionVALUE);


    YRITreeHTMLPageMenuBarHeaders::_STRINGNames___Into___enumWebHtmlPositions
                                        .insert("vertical_left",
                                                 WEBbHtmlElementPosition::vertical_left);


    YRITreeHTMLPageMenuBarHeaders::_STRINGNames___Into___enumWebHtmlPositions
                                        .insert("vertical_right",
                                                 WEBbHtmlElementPosition::vertical_right);


    YRITreeHTMLPageMenuBarHeaders::_STRINGNames___Into___enumWebHtmlPositions
                                        .insert("horizontal_top",
                                                 WEBbHtmlElementPosition::horizontal_top);


    YRITreeHTMLPageMenuBarHeaders::_STRINGNames___Into___enumWebHtmlPositions
                                        .insert("web_HTML_Element_POSITION_undefined",
                                                 web_HTML_Element_POSITION_undefined);
}


QString YRITreeHTMLPageMenuBarHeaders::generate_html_text_description()
{
    QString header_Menu_BAR_html_code_source;

    QString current_html_page_Menu_BAR_link_string;

    QString a_html_menu_bar_linked_file_Html_Page_NAME;

    YRITreeHTMLPage *a_html_menu_bar_linked_file_html_Page = 0;


    YERITH_WEB_PAGES_GENERATOR_MAIN *main_generator = YRITreeHTMLNode::get_main_generator_pointer();

    header_Menu_BAR_html_code_source = "\t<table border=\"1\">\n\t\t\t<tr>\n";

    if (0 != main_generator)
    {
        for (uint i = 0; i < _pages_file_names.size(); ++i)
        {
            a_html_menu_bar_linked_file_Html_Page_NAME = _pages_file_names.at(i);

            a_html_menu_bar_linked_file_html_Page =
                main_generator->Get___header_menu_bar_SPECIFICATION_name_in_file
                                    (a_html_menu_bar_linked_file_Html_Page_NAME);


            if (0 != a_html_menu_bar_linked_file_html_Page)
            {
                current_html_page_Menu_BAR_link_string =
                    a_html_menu_bar_linked_file_html_Page->Get__html_page_MENU_BAR_link_string();

                if (! current_html_page_Menu_BAR_link_string.isEmpty())
                {
                    header_Menu_BAR_html_code_source
                        .append(QString("\t\t\t\t<th><a href=\"http://localhost/~yerith-erp-pgi/%1/%2.php\">%3</a></th>\n")
                                    .arg(main_generator->Get___this_GENERATOR_specification_NAME(),
                                         a_html_menu_bar_linked_file_Html_Page_NAME,
                                         current_html_page_Menu_BAR_link_string));
                }
                else
                {
                    header_Menu_BAR_html_code_source
                        .append(QString("\t\t\t\t<th><a href=\"http://localhost/~yerith-erp-pgi/%1/%2.php\">%3</a></th>\n")
                                    .arg(main_generator->Get___this_GENERATOR_specification_NAME(),
                                         a_html_menu_bar_linked_file_Html_Page_NAME,
                                         a_html_menu_bar_linked_file_Html_Page_NAME));
                }
            }
            else
            {
                header_Menu_BAR_html_code_source
                    .append(QString("\t\t\t\t<th><a href=\"http://localhost/~yerith-erp-pgi/%1/%2.php\">%3</a></th>\n")
                                .arg(main_generator->Get___this_GENERATOR_specification_NAME(),
                                     a_html_menu_bar_linked_file_Html_Page_NAME,
                                     a_html_menu_bar_linked_file_Html_Page_NAME));
            }

            current_html_page_Menu_BAR_link_string.clear();
        }
    }


    header_Menu_BAR_html_code_source.append(QString("\t\t\t</tr>\n\t\t</table>"));

    return header_Menu_BAR_html_code_source;
}


void YRITreeHTMLPageMenuBarHeaders::Get_pages_sections(QList<QString> &Pages_file_names)
{
    Pages_file_names.clear();

    Pages_file_names.append(_pages_file_names);
}



