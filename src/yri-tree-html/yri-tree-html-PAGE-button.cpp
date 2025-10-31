/**
 * @AUTEUR: Pr. Prof. Dr.-Ing. XAVIER NOUNDOU
 *
 * 		yri-tree-html-PAGE-button.cpp
 */


#include "yri-tree-html-PAGE-button.hpp"


#include "utils/YRI_CPP_UTILS.hpp"


#include <QtCore/QDebug>


QString  YRITreeHTMLPageBUTTON::_header_Content_CSS_File;


YRITreeHTMLPageBUTTON::YRITreeHTMLPageBUTTON(YRITreeHTMLPage *a_containing_HTML_Page)
:YRITreeHTMLNode()
{
    if (_header_Content_CSS_File.isEmpty())
    {
        _header_Content_CSS_File.append(".button {\n")
                                .append("height: 90px;\n")
                                .append("width: 100px;\n")
                                .append("padding: 32px 15px;\n")
                                .append("text-align: center;\n")
                                .append("text-decoration: none;\n")
                                .append("font-size: 7px;\n")
                                .append("}\n\n");
    }

    SET_containing_HTML_Page(a_containing_HTML_Page);
}


YRITreeHTMLPageBUTTON::YRITreeHTMLPageBUTTON()
:YRITreeHTMLNode()
{
        _header_Content_CSS_File.append(".button {\n")
                                .append("height: 90px;\n")
                                .append("width: 100px;\n")
                                .append("padding: 32px 15px;\n")
                                .append("text-align: center;\n")
                                .append("text-decoration: none;\n")
                                .append("font-size: 7px;\n")
                                .append("}\n\n");
}


QString YRITreeHTMLPageBUTTON::generate_html_text_description()
{
    static bool first_call = true;

    static uint ID_for_button = 1;

    if (first_call)
    {
        _button_ID = 0;

        first_call = false;
    }
    else
    {
        _button_ID = ID_for_button;

        ++ID_for_button;
    }

    QString result =  QString("<button type=\"button\" class=\"%1\" id=\"%2\">\"%3\"</button><br/>\n")
                        .arg(QString("button positioned-element-%1")
                                .arg(QString::number(Get_Button_ID())),
                             QString::number(Get_Button_ID()),
                             Get__button_text());


//    QDEBUG_STRING_OUTPUT_2("YRITreeHTMLPageBUTTON::generate_html_text_description()",
//                            result);

    return result;
}


QString YRITreeHTMLPageBUTTON::generate_CSS_File_Content_STRING()
{
    int yri_button_X_position_geometry_integer_value = Get__yri_button_X_position_geometry_integer_value();

    int yri_button_Y_position_geometry_integer_value = Get__yri_button_Y_position_geometry_integer_value();


    int x_position = 0 + yri_button_X_position_geometry_integer_value;

    int y_position = 0 + yri_button_Y_position_geometry_integer_value;


    QString content;

    content.append(QString(".positioned-element-%1 {").arg(QString::number(Get_Button_ID())));

    content.append("position: absolute;\n")
           .append(QString("top: %1px; /*Y coordinate*/\n").arg(QString::number(y_position)));

    content.append(QString("left: %1px; /*X coordinate*/\n").arg(QString::number(x_position)));

    content.append("background-color: lightblue;\n")
           .append("}\n");

//    qDebug() << "Get__yri_button_Y_position_geometry()"
//             << Get__yri_button_Y_position_geometry();

    _header_Content_CSS_File.append("\n")
                            .append(content);


    return content;
}


QString YRITreeHTMLPageBUTTON::print_debugging()
{
    QString debugging_Text =
            QString("++++++++ a button; x:%1; y:%2; width:%3; height:%4. ++++++++")
                .arg(_yri_button_X_position_geometry,
                     _yri_button_Y_position_geometry,
                     _yri_button_WIDTH,
                     _yri_button_HEIGTH);

    QDEBUG_STRING_OUTPUT_2("debugging_Text",
                            debugging_Text);


    return debugging_Text;
}
