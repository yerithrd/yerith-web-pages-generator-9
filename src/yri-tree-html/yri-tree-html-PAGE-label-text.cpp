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
:YRITreeHTMLNode()
{
    if (_header_Content_CSS_File.isEmpty())
    {
    }

    SET_containing_HTML_Page(a_containing_HTML_Page);
}


YRITreeHTMLPageLABELText::YRITreeHTMLPageLABELText()
:YRITreeHTMLNode()
{
}


QString YRITreeHTMLPageLABELText::generate_html_text_description()
{
    static bool first_call = true;

    static uint ID_for_Label_text = 1;

    if (first_call)
    {
        _label_text_ID = 0;

        first_call = false;
    }
    else
    {
        _label_text_ID = ID_for_Label_text;

        ++ID_for_Label_text;
    }

//    QString result =  QString("<button type=\"button\" class=\"%1\" id=\"%2\">\"%3\"</button><br/>\n")
//                        .arg(QString("button positioned-element-%1")
//                                .arg(QString::number(Get_Button_ID())),
//                             QString::number(Get_Button_ID()),
//                             Get__button_text());


//    QDEBUG_STRING_OUTPUT_2("YRITreeHTMLPageLABELText::generate_html_text_description()",
//                            result);
    QString result;

    return result;
}


QString YRITreeHTMLPageLABELText::generate_CSS_File_Content_STRING()
{
    QString content;

    return content;
}


QString YRITreeHTMLPageLABELText::print_debugging()
{
    QString debugging_Text =
            QString("++++++++ a button; x:%1; y:%2; width:%3; height:%4. ++++++++")
                .arg(_yri_label_text_X_position_geometry,
                     _yri_label_text_Y_position_geometry,
                     _yri_label_text_WIDTH,
                     _yri_label_text_HEIGTH);

    QDEBUG_STRING_OUTPUT_2("debugging_Text",
                            debugging_Text);


    return debugging_Text;
}
