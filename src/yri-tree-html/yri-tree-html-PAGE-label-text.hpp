

#ifndef _YRI_TREE_HTML_page_label_text_HPP_
#define _YRI_TREE_HTML_page_label_text_HPP_


/**
 * @AUTEUR: Pr. Prof. Dr.-Ing. XAVIER NOUNDOU
 *
 * 		yri-tree-html-PAGE-button.hpp
 */


#include "yri-tree-html-node.hpp"

#include <QtCore/QString>


class YRITreeHTMLPageLABELText : public YRITreeHTMLNode
{
public:


    YRITreeHTMLPageLABELText(YRITreeHTMLPage *a_containing_HTML_Page);


    YRITreeHTMLPageLABELText();


    virtual inline ~YRITreeHTMLPageLABELText()
    {
    }



    virtual QString generate_html_text_description();


    virtual QString generate_CSS_File_Content_STRING();


    virtual QString print_debugging();


    virtual inline void SET__label_text(QString text_for_label)
    {
        _Label___Text = text_for_label;
    }

    virtual inline QString Get__label_text()
    {
        return _Label___Text;
    }


    virtual inline void SET__yri_font_size(QString A_yri_font_size)
    {
        _yri_font_size = A_yri_font_size;
    }

    virtual inline QString Get__yri_font_size()
    {
        return _yri_font_size;
    }



    virtual inline void SET__yri_label_text_X_position_geometry(QString A_yri_label_text_X_position_geometry)
    {
        _yri_label_text_X_position_geometry = A_yri_label_text_X_position_geometry;
    }

    virtual inline int Get__yri_label_text_X_position_geometry_integer_value()
    {
        return _yri_label_text_X_position_geometry.toInt();
    }

    virtual inline QString Get__yri_label_text_X_position_geometry()
    {
        return _yri_label_text_X_position_geometry;
    }



    virtual inline void SET__yri_label_text_Y_position_geometry(QString A_yri_label_text_Y_position_geometry)
    {
        _yri_label_text_Y_position_geometry = A_yri_label_text_Y_position_geometry;
    }

    virtual inline int Get__yri_label_text_Y_position_geometry_integer_value()
    {
        return _yri_label_text_Y_position_geometry.toInt();
    }

    virtual inline QString Get__yri_label_text_Y_position_geometry()
    {
        return _yri_label_text_Y_position_geometry;
    }



    virtual inline void SET__yri_label_text_WIDTH(QString A_yri_label_text_WIDTH)
    {
        _yri_label_text_WIDTH = A_yri_label_text_WIDTH;
    }

    virtual inline QString Get__yri_label_text_WIDTH()
    {
        return _yri_label_text_WIDTH;
    }


    virtual inline void SET__yri_label_text_HEIGTH(QString A_yri_label_text_HEIGTH)
    {
        _yri_label_text_HEIGTH = A_yri_label_text_HEIGTH;
    }

    virtual inline QString Get__yri_label_text_HEIGTH()
    {
        return _yri_label_text_HEIGTH;
    }


    virtual inline void Set_Label_text_ID(uint an_id)
    {
        _label_text_ID = an_id;
    }

    virtual inline uint Get_Label_text_ID()
    {
        return _label_text_ID;
    }

    static inline QString Get___header_Content_CSS_File()
    {
        return _header_Content_CSS_File;
    }


    static  QString  _header_Content_CSS_File;

protected:


    uint            _label_text_ID;

    QString         _Label___Text;


    QString         _yri_font_size;

    QString         _yri_label_text_X_position_geometry;

    QString         _yri_label_text_Y_position_geometry;

    QString         _yri_label_text_WIDTH;

    QString         _yri_label_text_HEIGTH;
};



#endif //_YRI_TREE_HTML_page_label_text_HPP_
