

#ifndef _YRI_TREE_HTML_page_text_section_HPP_
#define _YRI_TREE_HTML_page_text_section_HPP_


/**
 * @AUTEUR: Pr. Prof. Dr.-Ing. XAVIER NOUNDOU
 *
 * 		yri-tree-html-PAGE-text-section.hpp
 */


#include "yri-tree-html-node.hpp"

#include <QtCore/QString>


class YRITreeHTMLPageTextSECTION : public YRITreeHTMLNode
{
public:


    inline YRITreeHTMLPageTextSECTION(YRITreeHTMLPage *a_containing_HTML_Page)
    :YRITreeHTMLNode()
    {
        SET_containing_HTML_Page(a_containing_HTML_Page);
    }

    inline YRITreeHTMLPageTextSECTION()
    :YRITreeHTMLNode()
    {
    }

    virtual inline ~YRITreeHTMLPageTextSECTION()
    {
    }


    virtual inline QString generate_html_text_description()
    {
        return QString("<div> <br> %1%2%3 %4 <br/> </div>")
                    .arg(Get__html_page_text_section_HEADER_sized_Content_STRING(),
                         Get__html_page_text_section_HEADER_sized_Content_Title(),
                         Get__html_page_text_section_HEADER_sized_Content_STRING(true),
                         Get__html_page_text_section_Content_STRING());
    }


    virtual inline QString Get__html_page_text_section_HEADER_sized_Content_STRING(bool ending = false)
    {
        return (true == ending) ?
                    QString("</H%1>").arg(Get__html_page_text_section_HEADER_size_STRING()) :
                    QString("<H%1>").arg(Get__html_page_text_section_HEADER_size_STRING());
    }


    virtual inline QString Get__html_page_text_section_HEADER_sized_Content_Title()
    {
        return _text_section_Title;
    }


    virtual inline void SET__html_page_text_section_HEADER_size(uint text_section_HEADER_size)
    {
        _text_section_HEADER_size = text_section_HEADER_size;
    }

    virtual inline uint Get__html_page_text_section_HEADER_size()
    {
        return (0 == _text_section_HEADER_size) ? 1 : _text_section_HEADER_size;
    }


    virtual inline QString Get__html_page_text_section_HEADER_size_STRING()
    {
        return QString::number(Get__html_page_text_section_HEADER_size());
    }


    virtual void SET__html_page_text_section_Content_STRING(QString Some_text_section_Content_STRING);

    virtual inline QString Get__html_page_text_section_Content_STRING()
    {
        return _text_section_Content_STRING;
    }


    virtual inline void SET__html_page_text_section_Title_STRING(QString a_text_section_Title_STRING)
    {
        _text_section_Title = a_text_section_Title_STRING;
    }

    virtual inline QString Get__html_text_section_Title_STRING()
    {
        return _text_section_Title;
    }


    virtual inline void SET__yri_font_size(QString A_yri_font_size)
    {
        _yri_font_size = A_yri_font_size;
    }

    virtual inline QString Get__yri_font_size()
    {
        return _yri_font_size;
    }


    virtual inline void SET__yri_Div_Box___WiDth(QString A_yri_Div_Box___WiDth)
    {
        _yri_Div_Box___WiDth = A_yri_Div_Box___WiDth;
    }

    virtual inline QString Get__yri_Div_Box___WiDth()
    {
        return _yri_Div_Box___WiDth;
    }


    virtual inline void SET__yri_Div_Box___Unit_of_measure_specification(QString A_yri_Div_Box___Unit_of_measure_specification)
    {
        _yri_Div_Box___Unit_of_measure_specification = A_yri_Div_Box___Unit_of_measure_specification;
    }

    virtual inline QString Get__yri_Div_Box___Unit_of_measure_specification()
    {
        return _yri_Div_Box___Unit_of_measure_specification;
    }


    virtual inline void SET__containing_Pointer_Variable_Name_in_HTML_Page(QString A_containing_Pointer_Variable_Name_in_HTML_Page)
    {
        _containing_Pointer_Variable_Name_in_HTML_Page = A_containing_Pointer_Variable_Name_in_HTML_Page;
    }

    virtual inline QString Get__containing_Pointer_Variable_Name_in_HTML_Page()
    {
        return _containing_Pointer_Variable_Name_in_HTML_Page;
    }


protected:

    /**
     * 1, 2, etc.; For H1, H2, etc.
     */
    uint            _text_section_HEADER_size;


    QString         _yri_font_size;

    QString         _yri_Div_Box___WiDth;

    QString         _yri_Div_Box___Unit_of_measure_specification;


    QString         _containing_Pointer_Variable_Name_in_HTML_Page;

    QString         _text_section_Content_STRING;

    QString         _text_section_Title;
};



#endif //_YRI_TREE_HTML_page_text_section_HPP_
