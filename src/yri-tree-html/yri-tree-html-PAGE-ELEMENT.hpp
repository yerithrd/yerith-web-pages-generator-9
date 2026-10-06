

#ifndef _YRI_TREE_HTML_page_element_HPP_
#define _YRI_TREE_HTML_page_element_HPP_


/**
 * @AUTEUR: Pr. Prof. Dr.-Ing. XAVIER NOUNDOU
 *
 * 		yri-tree-html-PAGE-ELEMENT.hpp
 */

#include "yri-tree-html-node.hpp"

#include <QtCore/QString>


class YRITreeHTMLNode;


class YRITreeHTMLPageELEMENT : public YRITreeHTMLNode
{
public:


    YRITreeHTMLPageELEMENT()
    :YRITreeHTMLNode()
    {}


    virtual inline ~YRITreeHTMLPageELEMENT()
    {
    }



    virtual QString generate_html_text_description(){return "";}


    virtual QString generate_CSS_File_Content_STRING(){return "";}


    virtual QString print_debugging(){return "";}


    virtual inline void SET__element_text(QString text_for_element)
    {
        _element___Text = text_for_element;
    }

    virtual inline QString Get__element_text()
    {
        return _element___Text;
    }


    virtual inline void SET__yri_font_size(QString A_yri_font_size)
    {
        _yri_font_size = A_yri_font_size;
    }

    virtual inline QString Get__yri_font_size()
    {
        return _yri_font_size;
    }



    virtual inline void SET__yri_element_X_position_geometry(QString A_yri_element_X_position_geometry)
    {
        _yri_element_X_position_geometry = A_yri_element_X_position_geometry;
    }

    virtual inline int Get__yri_element_X_position_geometry_integer_value()
    {
        return _yri_element_X_position_geometry.toInt();
    }

    virtual inline QString Get__yri_element_X_position_geometry()
    {
        return _yri_element_X_position_geometry;
    }



    virtual inline void SET__yri_element_Y_position_geometry(QString A_yri_element_Y_position_geometry)
    {
        _yri_element_Y_position_geometry = A_yri_element_Y_position_geometry;
    }

    virtual inline int Get__yri_element_Y_position_geometry_integer_value()
    {
        return _yri_element_Y_position_geometry.toInt();
    }

    virtual inline QString Get__yri_element_Y_position_geometry()
    {
        return _yri_element_Y_position_geometry;
    }


    virtual inline void SET__yri_element_WIDTH(QString A_yri_element_WIDTH)
    {
        _yri_element_WIDTH = A_yri_element_WIDTH;
    }

    virtual inline QString Get__yri_element_WIDTH()
    {
        return _yri_element_WIDTH;
    }


    virtual inline void SET__yri_element_HEIGHT(QString A_yri_element_HEIGHT)
    {
        _yri_element_HEIGTH = A_yri_element_HEIGHT;
    }

    virtual inline QString Get__yri_element_HEIGHT()
    {
        return _yri_element_HEIGTH;
    }


    virtual inline void Set_Element_ID(uint an_id)
    {
        _element_ID = an_id;
    }

    virtual inline uint Get_element_ID()
    {
        return _element_ID;
    }


protected:

    /**
     * 1, 2, etc.; For H1, H2, etc.
     */
    uint            _text_section_HEADER_size;

    uint            _element_ID;

    QString         _element___Text;


    QString         _yri_font_size;

    QString         _yri_element_X_position_geometry;

    QString         _yri_element_Y_position_geometry;

    QString         _yri_element_WIDTH;

    QString         _yri_element_HEIGTH;
};



#endif //_YRI_TREE_HTML_page_element_HPP_
