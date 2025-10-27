/**
 * @AUTEUR: Pr. Prof. Dr.-Ing. XAVIER NOUNDOU
 *
 * 		yri-tree-html-PAGE-button.cpp
 */


#include "yri-tree-html-PAGE-button.hpp"


#include "utils/YRI_CPP_UTILS.hpp"



QString YRITreeHTMLPageBUTTON::generate_html_text_description()
{
    static uint ID = 1;

    return QString("<button type=\"button\" id=\"%1\">\"%2\"</button>")
           .arg(QString::number(ID++),
                Get__button_text());
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
