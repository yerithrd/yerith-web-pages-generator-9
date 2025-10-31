

#ifndef _YRI_TREE_HTML_page_button_HPP_
#define _YRI_TREE_HTML_page_button_HPP_


/**
 * @AUTEUR: Pr. Prof. Dr.-Ing. XAVIER NOUNDOU
 *
 * 		yri-tree-html-PAGE-button.hpp
 */


#include "yri-tree-html-node.hpp"

#include <QtCore/QString>


class YRITreeHTMLPageBUTTON : public YRITreeHTMLNode
{
public:


    YRITreeHTMLPageBUTTON(YRITreeHTMLPage *a_containing_HTML_Page);


    YRITreeHTMLPageBUTTON();


    virtual inline ~YRITreeHTMLPageBUTTON()
    {
    }



    virtual QString generate_html_text_description();


    virtual QString generate_CSS_File_Content_STRING();


    virtual QString print_debugging();


    virtual inline void SET__button_text(QString text_for_button)
    {
        _Button___Text = text_for_button;
    }

    virtual inline QString Get__button_text()
    {
        return _Button___Text;
    }


    virtual inline void SET__yri_font_size(QString A_yri_font_size)
    {
        _yri_font_size = A_yri_font_size;
    }

    virtual inline QString Get__yri_font_size()
    {
        return _yri_font_size;
    }


    virtual inline void SET__yri_button_X_position_geometry(QString A_yri_button_X_position_geometry)
    {
        _yri_button_X_position_geometry = A_yri_button_X_position_geometry;
    }

    virtual inline QString Get__yri_button_X_position_geometry()
    {
        return _yri_button_X_position_geometry;
    }


    virtual inline void SET__yri_button_Y_position_geometry(QString A_yri_button_Y_position_geometry)
    {
        _yri_button_Y_position_geometry = A_yri_button_Y_position_geometry;
    }

    virtual inline QString Get__yri_button_Y_position_geometry()
    {
        return _yri_button_Y_position_geometry;
    }


    virtual inline void SET__yri_button_WIDTH(QString A_yri_button_WIDTH)
    {
        _yri_button_WIDTH = A_yri_button_WIDTH;
    }

    virtual inline QString Get__yri_button_WIDTH()
    {
        return _yri_button_WIDTH;
    }


    virtual inline void SET__yri_button_HEIGTH(QString A_yri_button_HEIGTH)
    {
        _yri_button_HEIGTH = A_yri_button_HEIGTH;
    }

    virtual inline QString Get__yri_button_HEIGTH()
    {
        return _yri_button_HEIGTH;
    }


    virtual inline void Set_Buuton_ID(uint an_id)
    {
        _button_ID = an_id;
    }

    virtual inline uint Get_Button_ID()
    {
        return _button_ID;
    }

    static inline QString Get___header_Content_CSS_File()
    {
        return _header_Content_CSS_File;
    }


    static  QString  _header_Content_CSS_File;

protected:

    /**
     * 1, 2, etc.; For H1, H2, etc.
     */
    uint            _text_section_HEADER_size;

    uint            _button_ID;

    QString         _Button___Text;


    QString         _yri_font_size;

    QString         _yri_button_X_position_geometry;

    QString         _yri_button_Y_position_geometry;

    QString         _yri_button_WIDTH;

    QString         _yri_button_HEIGTH;
};



#endif //_YRI_TREE_HTML_page_button_HPP_
