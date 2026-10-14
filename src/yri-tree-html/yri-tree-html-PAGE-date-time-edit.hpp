

#ifndef _YRI_TREE_HTML_page_date_time_edit_HPP_
#define _YRI_TREE_HTML_page_date_time_edit_HPP_


/**
 * @AUTEUR: Pr. Prof. Dr.-Ing. XAVIER NOUNDOU
 *
 * 		yri-tree-html-PAGE-date-time-edit.hpp
 */


#include "yri-tree-html-node.hpp"

#include "yri-tree-html-PAGE-ELEMENT.hpp"

#include <QtCore/QString>


class YRITreeHTMLPageELEMENT;


class YRITreeHTMLPageDatetimeedit : public YRITreeHTMLPageELEMENT
{
public:


    YRITreeHTMLPageDatetimeedit(YRITreeHTMLPage *a_containing_HTML_Page);


    YRITreeHTMLPageDatetimeedit();


    virtual inline ~YRITreeHTMLPageDatetimeedit()
    {
    }



    virtual QString generate_html_text_description();


    virtual QString generate_CSS_File_Content_STRING();


    virtual QString print_debugging();


    static inline QString Get___header_Content_CSS_File()
    {
        return _header_Content_CSS_File;
    }


    static  QString  _header_Content_CSS_File;



    QString _date;

    QString _year;

    QString _month;

    QString _day;

};



#endif //_YRI_TREE_HTML_page_date_time_edit_HPP_
