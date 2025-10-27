

#ifndef _YRI_TREE_HTML_page_menu_bar_headers_HPP_
#define _YRI_TREE_HTML_page_menu_bar_headers_HPP_


/**
 * @AUTEUR: Pr. Prof. Dr.-Ing. XAVIER NOUNDOU
 *
 * 		yri-tree-html-PAGE-menu-bar-headers.hpp
 */


#include "yri-tree-html-node.hpp"

#include <QtCore/QMap>

#include <QtCore/QString>



enum WEBbHtmlElementPosition
{
    vertical_left                       = 0,
    vertical_right                      = 1,
    horizontal_top                      = 2,
    web_HTML_Element_POSITION_undefined = 3
};


class YRITreeHTMLPageMenuBarHeaders : public YRITreeHTMLNode
{
public:

    inline YRITreeHTMLPageMenuBarHeaders(QString a_web_html_element_positionVALUE)
    :YRITreeHTMLNode(),
     _menu_bar_position_web_page(horizontal_top)
    {
        initializations(a_web_html_element_positionVALUE);
    }

    inline YRITreeHTMLPageMenuBarHeaders()
    :YRITreeHTMLNode(),
     _menu_bar_position_web_page(horizontal_top)
    {
        initializations();
    }

    virtual inline ~YRITreeHTMLPageMenuBarHeaders()
    {
    }


    virtual void initializations(QString a_web_html_element_positionVALUE = "");


    virtual inline enum WEBbHtmlElementPosition
                receive_value_converted_Into_WEBbHtmlElementPosition
                    (QString a_web_html_element_positionVALUE)
    {
        return _STRINGNames___Into___enumWebHtmlPositions
                    .value(a_web_html_element_positionVALUE.trimmed());
    }


    virtual QString generate_html_text_description();


    virtual inline void set_menu_bar_position_web_page(enum WEBbHtmlElementPosition a_menu_bar_position)
    {
        _menu_bar_position_web_page = a_menu_bar_position;
    }

    virtual inline enum WEBbHtmlElementPosition Get_menu_bar_position_web_page()
    {
        return _menu_bar_position_web_page;
    }


    virtual void Get_pages_sections(QList<QString> &Pages_file_names);


    virtual inline void Add_pages_section(QString A_page_file_name)
    {
        _pages_file_names.append(A_page_file_name);
    }

protected:

    enum WEBbHtmlElementPosition                             _menu_bar_position_web_page;

    static QMap<QString, enum WEBbHtmlElementPosition>       _STRINGNames___Into___enumWebHtmlPositions;

    /**
     * Contains HTML Page 'FILE NAME' declared in
     * upper-related class 'YRITreeHTMLNode'.
     */
    QList<QString>                                            _pages_file_names;
};



#endif //_YRI_TREE_HTML_page_menu_bar_headers_HPP_
