/**
 * @AUTEUR: Pr. Prof. Dr.-Ing. XAVIER NOUNDOU
 *
 * 		yri-tree-html-PAGE-button.cpp
 */


#include "yri-tree-html-PAGE-label-text.hpp"

#include "utils/YRI_CPP_UTILS.hpp"


#include <QtCore/QDebug>


QString  YRITreeHTMLPageLABELText::_header_Content_CSS_File;


YRITreeHTMLPageLABELText::YRITreeHTMLPageLABELText(YRITreeHTMLPage *a_containing_HTML_Page)
:YRITreeHTMLPageELEMENT()
{
    if (_header_Content_CSS_File.isEmpty())
    {
    }

    SET_containing_HTML_Page(a_containing_HTML_Page);
}


YRITreeHTMLPageLABELText::YRITreeHTMLPageLABELText()
:YRITreeHTMLPageELEMENT()
{
}


QString YRITreeHTMLPageLABELText::generate_html_text_description()
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

    QString result =  QString("<button type=\"button\" id=\"labeled-text-id%1\">\"%2\"</button><br/>\n")
                        .arg(QString::number(Get_element_ID()),
                             Get__element_text());

//    QString result =  QString("<div id=\"labeled-text-id%1\">%2</div>\n")
//                        .arg(QString::number(Get_Label_text_ID()),
//                             Get__label_text());


//    QDEBUG_STRING_OUTPUT_2("YRITreeHTMLPageLABELText::generate_html_text_description()",
//                            result);

    return result;
}


QString YRITreeHTMLPageLABELText::generate_CSS_File_Content_STRING()
{
    int yri_label_text_X_position_geometry_integer_value = Get__yri_element_X_position_geometry_integer_value();

    int yri_label_text_Y_position_geometry_integer_value = Get__yri_element_Y_position_geometry_integer_value();


    int x_position = 0 + yri_label_text_X_position_geometry_integer_value;

    int y_position = 0 + yri_label_text_Y_position_geometry_integer_value;

    QString width_value = Get__yri_element_WIDTH();

    QString heigth_value = Get__yri_element_HEIGTH();


    QString content;

    content.append(QString("#labeled-text-id%1{\n").arg(QString::number(Get_element_ID())));

    content.append("position: absolute;\n")
           .append(QString("top: %1px; /*Y coordinate*/\n").arg(QString::number(y_position)))
           .append(QString("left: %1px; /*X coordinate*/\n").arg(QString::number(x_position)))
           .append(QString("width: %1px; /*width value*/\n").arg(width_value))
           .append(QString("heigth: %1px; /*heigth value*/\n").arg(heigth_value));

    content.append("}\n\n");

//    qDebug() << "Get__yri_label_text_WIDTH()"
//             << Get__yri_label_text_WIDTH()
//             << "\nGet__yri_label_text_HEIGTH()"
//             << Get__yri_label_text_HEIGTH();

    _header_Content_CSS_File.append("\n")
                            .append(content);

    return content;
}


QString YRITreeHTMLPageLABELText::print_debugging()
{
    QString debugging_Text =
            QString("++++++++ a button; x:%1; y:%2; width:%3; height:%4. ++++++++")
                .arg(_yri_element_X_position_geometry,
                     _yri_element_Y_position_geometry,
                     _yri_element_WIDTH,
                     _yri_element_HEIGTH);

    QDEBUG_STRING_OUTPUT_2("debugging_Text",
                            debugging_Text);


    return debugging_Text;
}
