/**
 * @AUTEUR: Pr. Prof. Dr.-Ing. XAVIER NOUNDOU
 *
 * 		yri-tree-html-PAGE-input-text.cpp
 */


#include "yri-tree-html-PAGE-input-text.hpp"


#include "utils/YRI_CPP_UTILS.hpp"


#include <QtCore/QDebug>


QString  YRITreeHTMLPageInputText::_header_Content_CSS_File;


YRITreeHTMLPageInputText::YRITreeHTMLPageInputText(YRITreeHTMLPage *a_containing_HTML_Page)
:YRITreeHTMLPageELEMENT()
{
    if (_header_Content_CSS_File.isEmpty())
    {
    }

    SET_containing_HTML_Page(a_containing_HTML_Page);
}


YRITreeHTMLPageInputText::YRITreeHTMLPageInputText()
:YRITreeHTMLPageELEMENT()
{
}


QString YRITreeHTMLPageInputText::generate_html_text_description()
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

    QString result = QString("<form action=\"\">\n<label id=\"input_text_label-id%1\" for=\"%2\">%3</label><br>\n")
                        .arg(QString::number(Get_element_ID()),
                             Get__element_name(),
                             Get__element_text());

    result.append(QString("<input type=\"text\" id=\"input_text_input-id%1\" name=\"%2\"></br></br>\n")
                        .arg(QString::number(Get_element_ID()),
                             Get__element_name()));

    result.append(QString("<input id=\"input_text_submit-id%1\" type=\"submit\" value=\"Submit\">\n")
                    .arg(QString::number(Get_element_ID())));

    result.append("</form>\n");

    result.append("\n");

    QDEBUG_STRING_OUTPUT_2("YRITreeHTMLPageInputText::generate_html_text_description()",
                            result);

    return result;
}


QString YRITreeHTMLPageInputText::generate_CSS_File_Content_STRING()
{
    int x_label_position = Get__yri_element_X_position_geometry_integer_value();

    int y_label_position = Get__yri_element_Y_position_geometry_integer_value();

    int x_input_position = x_label_position + 120;

    int y_input_position = y_label_position;

    int x_submit_position = x_label_position + 3;

    int y_submit_position = y_label_position + 27;


    QString width_value = Get__yri_element_WIDTH();


    QString content;

    content.append(QString("#input_text_label-id%1{\n")
                    .arg(QString::number(Get_element_ID())));

    content.append("position: absolute;\n")
           .append(QString("top: %1px; /*Y coordinate*/\n").arg(QString::number(y_label_position)))
           .append(QString("left: %1px; /*X coordinate*/\n").arg(QString::number(x_label_position)));

    content.append("}\n");

    content.append(QString("#input_text_input-id%1{\n")
                    .arg(QString::number(Get_element_ID())));
    content.append("position: absolute;\n")
           .append(QString("top: %1px; /*Y coordinate*/\n").arg(QString::number(y_input_position)))
           .append(QString("left: %1px; /*X coordinate*/\n").arg(QString::number(x_input_position)));

    content.append("}\n");

    content.append(QString("#input_text_submit-id%1{\n")
                    .arg(QString::number(Get_element_ID())));
    content.append("position: absolute;\n")
           .append(QString("top: %1px; /*Y coordinate*/\n").arg(QString::number(y_submit_position)))
           .append(QString("left: %1px; /*X coordinate*/\n").arg(QString::number(x_submit_position)));

    content.append("}\n\n");


    YRITreeHTMLPageInputText::_header_Content_CSS_File.append("\n")
                                                     .append(content);

    return content;
}


QString YRITreeHTMLPageInputText::print_debugging()
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
