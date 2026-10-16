/**
 * @AUTEUR: Pr. Prof. Dr.-Ing. XAVIER NOUNDOU
 *
 * 		yri-tree-html-PAGE-date-time-edit.cpp
 */


#include "yri-tree-html-PAGE-date-time-edit.hpp"

#include "utils/YRI_CPP_UTILS.hpp"


#include <QtCore/QDebug>


QString  YRITreeHTMLPageDatetimeedit::_header_Content_CSS_File;


YRITreeHTMLPageDatetimeedit::YRITreeHTMLPageDatetimeedit(YRITreeHTMLPage *a_containing_HTML_Page)
:YRITreeHTMLPageELEMENT()
{
    SET_containing_HTML_Page(a_containing_HTML_Page);
}


YRITreeHTMLPageDatetimeedit::YRITreeHTMLPageDatetimeedit()
:YRITreeHTMLPageELEMENT()
{
}


QString YRITreeHTMLPageDatetimeedit::generate_html_text_description()
{
    static bool first_call = true;

    static uint ID_for_dateTimeEdit = 1;

    if (first_call)
    {
        _element_ID = 0;

        first_call = false;
    }
    else
    {
        _element_ID = ID_for_dateTimeEdit;

        ++ID_for_dateTimeEdit;
    }
//<form action="/action_page.php">
//  <label for="birthday">Birthday:</label>
//  <input type="date" id="birthday" name="birthday">
//  <input type="submit">
//</form>
    QString result = "<form action=\"\" >\n";

    result.append(QString("<label id=\"label-date-time-id%1\" for=\"date-time-id%2\">%3</label>\n")
                        .arg(QString::number(Get_element_ID()),
                             QString::number(Get_element_ID()),
                             Get__element_text()));

    result.append(QString("<input type=\"date\" id=\"date-time-id%1\" name=\"date-time-id%2\"> \n")
                        .arg(QString::number(Get_element_ID()),
                             QString::number(Get_element_ID())));

    result.append("<input type=\"sumit\"> \n</form>\n\n");
//    QDEBUG_STRING_OUTPUT_2("YRITreeHTMLPageDatetimeedit::generate_html_text_description()",
//                            result);

    return result;
}


QString YRITreeHTMLPageDatetimeedit::generate_CSS_File_Content_STRING()
{
    int x_position = Get__yri_element_X_position_geometry_integer_value();

    int y_position = Get__yri_element_Y_position_geometry_integer_value();


    QString content;

    content.append(QString("label-date-time-id%1 {").arg(QString::number(Get_element_ID())));

    content.append("position: absolute;\n")
           .append(QString("top: %1px; /*Y coordinate*/\n").arg(QString::number(y_position)));

    content.append(QString("left: %1px; /*X coordinate*/\n").arg(QString::number(x_position)));

    content.append("}\n");


    QString content_2;

    content_2.append(QString("date-time-id%1 {").arg(QString::number(Get_element_ID())));

    content_2.append("position: absolute;\n")
           .append(QString("top: %1px; /*Y coordinate*/\n").arg(QString::number(y_position)));

    content_2.append(QString("left: %1px; /*X coordinate*/\n").arg(QString::number(x_position)));

    content_2.append("}\n");

//    qDebug() << "Get__yri_button_Y_position_geometry()"
//             << Get__yri_button_Y_position_geometry();

    _header_Content_CSS_File.append("\n")
                            .append(content)
                            .append(content_2);


    return content;
}


QString YRITreeHTMLPageDatetimeedit::print_debugging()
{
    QString debugging_Text =
            QString("++++++++ a datetimeedit; x:%1; y:%2; width:%3; height:%4. ++++++++")
                .arg(_yri_element_X_position_geometry,
                     _yri_element_Y_position_geometry,
                     _yri_element_WIDTH,
                     _yri_element_HEIGHT);

    QDEBUG_STRING_OUTPUT_2("debugging_Text",
                            debugging_Text);


    return debugging_Text;
}
