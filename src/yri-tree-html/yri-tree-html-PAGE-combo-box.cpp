/**
 * @AUTEUR: Pr. Prof. Dr.-Ing. XAVIER NOUNDOU
 *
 * 		yri-tree-html-PAGE-combo-box.cpp
 */


#include "yri-tree-html-PAGE-combo-box.hpp"


#include "utils/YRI_CPP_UTILS.hpp"


#include <QtCore/QDebug>


QString  YRITreeHTMLPageComboBox::_header_Content_CSS_File;


YRITreeHTMLPageComboBox::YRITreeHTMLPageComboBox(YRITreeHTMLPage *a_containing_HTML_Page)
:YRITreeHTMLPageELEMENT()
{
    if (_header_Content_CSS_File.isEmpty())
    {
    }

    SET_containing_HTML_Page(a_containing_HTML_Page);
}


YRITreeHTMLPageComboBox::YRITreeHTMLPageComboBox()
:YRITreeHTMLPageELEMENT()
{
}


QString YRITreeHTMLPageComboBox::generate_html_text_description()
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

    QString result =  QString("<select name=\"%1\" id=\"combo-box-id%2\">\n")
                        .arg(Get__element_name(),
                             QString::number(Get_element_ID()));

    result.append(QString("<option value=\"%1\">%2</option>")
                    .arg(Get__element_text().toLower(),
                         Get__element_text()));

    result.append("\n</select>\n");

//    QDEBUG_STRING_OUTPUT_2("YRITreeHTMLPageComboBox::generate_html_text_description()",
//                            result);

    return result;
}


QString YRITreeHTMLPageComboBox::generate_CSS_File_Content_STRING()
{
    int x_position = Get__yri_element_X_position_geometry_integer_value();

    int y_position = Get__yri_element_Y_position_geometry_integer_value();


    QString width_value = Get__yri_element_WIDTH();


    QString content;

    content.append(QString("#combo-box-id%1{\n")
                    .arg(QString::number(Get_element_ID())));

    content.append("position: absolute;\n")
           .append(QString("top: %1px; /*Y coordinate*/\n").arg(QString::number(y_position)))
           .append(QString("left: %1px; /*X coordinate*/\n").arg(QString::number(x_position)));

    content.append("}\n\n");


    YRITreeHTMLPageComboBox::_header_Content_CSS_File.append("\n")
                                                     .append(content);

    return content;
}


QString YRITreeHTMLPageComboBox::print_debugging()
{
    QString debugging_Text =
            QString("++++++++ a combo box; x:%1; y:%2; width:%3; height:%4. ++++++++")
                .arg(_yri_element_X_position_geometry,
                     _yri_element_Y_position_geometry,
                     _yri_element_WIDTH,
                     _yri_element_HEIGHT);

    QDEBUG_STRING_OUTPUT_2("debugging_Text",
                            debugging_Text);


    return debugging_Text;
}
