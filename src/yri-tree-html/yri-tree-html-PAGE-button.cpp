/**
 * @AUTEUR: Pr. Prof. Dr.-Ing. XAVIER NOUNDOU
 *
 * 		yri-tree-html-PAGE-button.cpp
 */


#include "yri-tree-html-PAGE-button.hpp"


#include "utils/YRI_CPP_UTILS.hpp"



QString  YRITreeHTMLPageBUTTON::_header_Content_CSS_File;


YRITreeHTMLPageBUTTON::YRITreeHTMLPageBUTTON()
:YRITreeHTMLNode()
{
    _header_Content_CSS_File.append(".button {\n")
                            .append("border: none; \n")
                            .append("padding: 15px 32px;\n")
                            .append("text-align: center;\n")
                            .append("text-decoration: none;\n")
                            .append("display: inline-block;\n")
                            .append("font-size: 16px;\n")
                            .append("margin: 4px 2px;\n")
                            .append("cursor: pointer;\n")
                            .append("}\n\n");
}


QString YRITreeHTMLPageBUTTON::generate_html_text_description()
{
    static uint first_call = 0;

    _button_ID = first_call++;

    return QString("<button type=\"button\" id=\"%1\">\"%2\"</button><br/>\n")
           .arg(QString::number(_button_ID),
                Get__button_text());
}


QString YRITreeHTMLPageBUTTON::generate_CSS_File_Content_STRING()
{
    QString content;

    content.append(".positioned-element-%1 {").arg(QString::number(Get_Button_ID()));

    content.append("position: absolute;\n")
           .append("top: %1; /*Y coordinate*/\n").arg(Get__yri_button_Y_position_geometry());

    content.append("left: %1; /*X coordinate*/\n").arg(Get__yri_button_X_position_geometry());

    content.append("background-color: lightblue;\n")
           .append("padding: 10px\n")
           .append("}\n");


    _header_Content_CSS_File.append("\n\n")
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
