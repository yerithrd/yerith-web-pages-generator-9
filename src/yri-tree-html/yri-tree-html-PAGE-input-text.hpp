

#ifndef _YRI_TREE_HTML_page_Input_text_HPP_
#define _YRI_TREE_HTML_page_Input_text_HPP_


/**
 * @AUTEUR: Pr. Prof. Dr.-Ing. XAVIER NOUNDOU
 *
 * 		yri-tree-html-PAGE-input-text.hpp
 */


#include "yri-tree-html-node.hpp"

#include "yri-tree-html-PAGE-ELEMENT.hpp"

#include <QtCore/QString>



class YRITreeHTMLPageELEMENT;


class YRITreeHTMLPageInputText : public YRITreeHTMLPageELEMENT
{
public:


    YRITreeHTMLPageInputText(YRITreeHTMLPage *a_containing_HTML_Page);


    YRITreeHTMLPageInputText();


    virtual inline ~YRITreeHTMLPageInputText()
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
};



#endif //_YRI_TREE_HTML_page_Input_text_HPP_
