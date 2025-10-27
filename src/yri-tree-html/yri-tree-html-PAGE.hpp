

#ifndef _YRI_TREE_HTML_page_HPP_
#define _YRI_TREE_HTML_page_HPP_


/**
 * @AUTEUR: Pr. Prof. Dr.-Ing. XAVIER NOUNDOU
 *
 * 		yri-tree-html-PAGE.hpp
 */


#include "yri-tree-html-node.hpp"


#include "utils/YRI_CPP_UTILS.hpp"


#include <QtCore/QSet>

#include <QtCore/QString>


class YRI_CPP_UTILS;

class YRITreeHTMLPageTextSECTION;

class YRITreeHTMLPageMenuBarHeaders;



class YRITreeHTMLPage : public YRITreeHTMLNode
{
public:


    inline YRITreeHTMLPage(QString html_page_name,
                           QString html_page_title,
                           QString html_page_stylesheet_name)
    :YRITreeHTMLNode(),
     _header_menu_bar(0),
     _html_page_name(html_page_name),
     _html_page_MENU_BAR_link_string(YRI_CPP_UTILS::EMPTY_STRING),
     _html_page_title(html_page_title),
     _html_page_STYLESHEET_Name(html_page_stylesheet_name)
    {
        Set_html_page_STYLESHEET_Name(html_page_name);
    }


    inline YRITreeHTMLPage(QString html_page_name,
                           QString html_page_title)
    :YRITreeHTMLNode(),
     _header_menu_bar(0),
     _html_page_name(html_page_name),
     _html_page_MENU_BAR_link_string(YRI_CPP_UTILS::EMPTY_STRING),
     _html_page_title(html_page_title),
     _html_page_STYLESHEET_Name(YRI_CPP_UTILS::EMPTY_STRING)
    {
        Set_html_page_STYLESHEET_Name(html_page_name);
    }


    inline YRITreeHTMLPage()
    :YRITreeHTMLNode(),
     _header_menu_bar(0),
     _html_page_name(YRI_CPP_UTILS::EMPTY_STRING),
     _html_page_MENU_BAR_link_string(YRI_CPP_UTILS::EMPTY_STRING),
     _html_page_title(YRI_CPP_UTILS::EMPTY_STRING),
     _html_page_STYLESHEET_Name(YRI_CPP_UTILS::EMPTY_STRING)
    {
    }


    virtual inline ~YRITreeHTMLPage()
    {
    }


    virtual QString generate_html_text_description();


    virtual QString GET_htlm_PAGE_body_Content_STRING();



    virtual inline QString Get_html_Page_Line_Comments(uint a_line_of_Comments)
    {
        return _html_page_Line___TO___Comments.value(a_line_of_Comments);
    }

    virtual inline void SET_html_Page_Line_Comments(uint    a_line_of_Comments,
                                                    QString a_line_comments)
    {
        _html_page_Line___TO___Comments
            .insert(a_line_of_Comments,
                    a_line_comments);
    }



    virtual inline void SET__html_page_name(QString a_html_page_name)
    {
        _html_page_name = a_html_page_name;
    }

    virtual inline QString Get__html_page_name()
    {
        return _html_page_name;
    }



    virtual inline void SET__html_page_MENU_BAR_link_string(QString a_html_page_MENU_BAR_link_string)
    {
        _html_page_MENU_BAR_link_string = a_html_page_MENU_BAR_link_string;
    }

    virtual inline QString Get__html_page_MENU_BAR_link_string()
    {
        return _html_page_MENU_BAR_link_string;
    }


    virtual inline void SET__html_page_title(QString a_html_page_title)
    {
        _html_page_title = a_html_page_title;
    }

    virtual inline QString Get__html_page_title()
    {
        return _html_page_title;
    }


    virtual inline QString Get_STYLESHEET_Specification_STRING()
    {
        return _html_page_STYLESHEET_Name;
    }

    virtual inline void Set_html_page_STYLESHEET_Name(QString A_html_page_STYLESHEET_Name)
    {
        _html_page_STYLESHEET_Name = A_html_page_STYLESHEET_Name;
    }

    virtual inline QString get_html_page_stylesheet_name()
    {
        return _html_page_STYLESHEET_Name;
    }


    virtual void get_pages_html_node_ID_in_HEADER_MENU_BAR(QList<QString> &header_menu_bar);


    virtual inline void Set_header_menu_bar(YRITreeHTMLPageMenuBarHeaders *A_header_menu_bar)
    {
        _header_menu_bar = A_header_menu_bar;
    }

    virtual inline YRITreeHTMLPageMenuBarHeaders *Get_header_menu_bar()
    {
        return _header_menu_bar;
    }


    virtual inline void Set_header_menu_bar___STRING_CONTENT(QString a_PHP_page___header_menu_bar_Content)
    {
        _PHP_page___header_menu_bar_Content = a_PHP_page___header_menu_bar_Content;
    }

    virtual inline QString Get_header_menu_bar___STRING_CONTENT()
    {
        return _PHP_page___header_menu_bar_Content;
    }


    virtual void add_An_HTML_Page_Text_SECTION(QString                        a_divVariable,
                                               YRITreeHTMLPageTextSECTION    *a_html_page_Text_Section);


    virtual YRITreeHTMLPageTextSECTION *get_HTML_page_Text_SECTIONS(QString a_divVariable);


protected:

    YRITreeHTMLPageMenuBarHeaders *_header_menu_bar;


    QString                        _PHP_page___header_menu_bar_Content;


    QString                        _html_page_name;

    QString                        _html_page_MENU_BAR_link_string;

    QString                        _html_page_title;

    QString                        _html_page_STYLESHEET_Name;


    QMap<QString, YRITreeHTMLPageTextSECTION *> _divVariable__TO____html_page_Text_SECTIONS;


    QMap<uint, QString>            _html_page_Line___TO___Comments;
};



#endif //_YRI_TREE_HTML_page_HPP_
