/**
 * @AUTEUR: Pr. Prof. Dr.-Ing. XAVIER NOUNDOU
 *
 * 		yri-tree-html-PAGE-tableview.cpp
 */


#include "yri-tree-html-PAGE-tableview.hpp"


#include "utils/YRI_CPP_UTILS.hpp"


#include <QtCore/QDebug>


QString  YRITreeHTMLPageTableView::_header_Content_CSS_File;


YRITreeHTMLPageTableView::YRITreeHTMLPageTableView(YRITreeHTMLPage *a_containing_HTML_Page)
:YRITreeHTMLPageELEMENT()
{
    if (_header_Content_CSS_File.isEmpty())
    {
    }

    SET_containing_HTML_Page(a_containing_HTML_Page);
}


YRITreeHTMLPageTableView::YRITreeHTMLPageTableView()
:YRITreeHTMLPageELEMENT()
{
}


QString YRITreeHTMLPageTableView::generate_html_text_description()
{
    static bool first_call = true;

    static uint ID_for_Label_text = 1;

    if (first_call)
    {
        _element_ID = 0;

        first_call = false;
    }
    else
    {
        _element_ID = ID_for_Label_text;

        ++ID_for_Label_text;
    }

    QString result;

    result.append("<table></table>");

//    QDEBUG_STRING_OUTPUT_2("YRITreeHTMLPageTableView::generate_html_text_description()",
//                            result);

    return result;
}


QString YRITreeHTMLPageTableView::generate_CSS_File_Content_STRING()
{
    QString content;

    return content;
}


QString YRITreeHTMLPageTableView::print_debugging()
{
    QString debugging_Text =
            QString("++++++++ a table view; x:%1; y:%2; width:%3; height:%4. ++++++++")
                .arg(_yri_element_X_position_geometry,
                     _yri_element_Y_position_geometry,
                     _yri_element_WIDTH,
                     _yri_element_HEIGHT);

    QDEBUG_STRING_OUTPUT_2("debugging_Text",
                            debugging_Text);


    return debugging_Text;
}
