#ifndef _YERITH_WEB_PAGES_GENERATOR_MAIN_HPP_
#define _YERITH_WEB_PAGES_GENERATOR_MAIN_HPP_


/**
 * @AUTEUR: Pr. Prof. Dr.-Ing. XAVIER NOUNDOU
 *
 * 		YERITH_WEB_PAGES_GENERATOR_MAIN.hpp
 */

//#include "yri-tree-html/yri-tree-html-PAGE-menu-bar-headers.hpp"


#include <QtCore/QPair>
#include <QtCore/QMap>
#include <QtCore/QString>



class YRITreeHTMLPageBUTTON;

class YRITreeHTMLPageTextSECTION;

class YRITreeHTMLPageMenuBarHeaders;

class YRITreeHTMLPage;

class YRITreeHTMLNode;


class YERITH_WEB_PAGES_GENERATOR_MAIN
{
public:

    inline YERITH_WEB_PAGES_GENERATOR_MAIN()
    :_web_page_Current_PROCESSED_button(0),
     _web_page_Current_Button___LIST(0),
     _web_page_menu_bar_Header(0)
    {
    }

    virtual inline ~YERITH_WEB_PAGES_GENERATOR_MAIN()
    {
    }



    static QString YRI_web_dsl_nine_Zero_open_template_file_CSS();


    static QString YRI_web_dsl_nine_Zero_open_template_file_HPP();


    static QString YRI_web_dsl_nine_Zero_open_template_file_Menu_bar_header_HPP();




    virtual void Generate__ALL__HTML__related_Web_PAGES(QString directory_folder);



    virtual inline void Set_current_processed_HTML_Page_MENU_BAR_link_string
                            (QString a_current_processed_HTML_Page_MENU_BAR_link_string)
    {
        _current_processed_HTML_Page_MENU_BAR_link_string = a_current_processed_HTML_Page_MENU_BAR_link_string;
    }



    virtual inline void Set_current_processed_HTML_Page_Current_DIVISION_variable_STRING
                            (QString a_current_processed_HTML_Page_Current_DIVISION_variable_STRING)
    {
        _current_processed_HTML_Page_Current_DIVISION_variable_STRING = a_current_processed_HTML_Page_Current_DIVISION_variable_STRING;
    }

    virtual inline QString GetCurrent_processed_HTML_Page_Current_DIVISION_variable_STRING()
    {
        return _current_processed_HTML_Page_Current_DIVISION_variable_STRING;
    }



    virtual inline void Set_current_processed_HTML_Page_TItle
                            (QString a_current_processed_HTML_Page_TItle)
    {
        _current_processed_HTML_Page_TItle = a_current_processed_HTML_Page_TItle;
    }

    virtual inline QString GetCurrent_processed_HTML_Page_TItle()
    {
        return _current_processed_HTML_Page_TItle;
    }



    virtual inline void Set_current_processed_HTML_Page
                            (QString a_current_processed_HTML_Page)
    {
        _current_processed_HTML_Page = a_current_processed_HTML_Page;
    }

    virtual inline QString GetCurrent_processed_HTML_Page()
    {
        return _current_processed_HTML_Page;
    }



    virtual void PROCESS___comments(int     a_line_number,
                                    QString thisline_comment_QSTRING);



    virtual void PROCESS___start_input(QString webPagesGeneratorMAIN_specification_name);


    virtual void PROCESS___yri_html_web_html_page__MENU_BAR_link_string__spec(QString html_page_MENU_BAR_link_string);


    virtual void PROCESS__VARIABLE_YRI_PARAGRAPH_creation_DStructure(QString a_variable_paragraph);


    virtual void PROCESS___yri_html_page_text_SECTION_BodY_TEXTSPECIFICATION_spec_FONT_SIZE(QString a_font_size);


    virtual void PROCESS___yri_html_page_text_SECTION_BodY_TEXTSPECIFICATION_spec_DIV_BOX_WIDTH(QString a_div_BOX_WiDth,
                                                                                                QString a_unit_of_measure_specification);


    virtual void PROCESS___yri_html_page_text_SECTION_BodY_TEXTSPECIFICATION_spec_DIV_BOX_TEXT(QString a_DiV_BOX_text);


    virtual void PROCESS___yri_html_page_text_SECTION_BodY_SPECSIZES_spec();


    virtual void PROCESS___yri_html_page_text_SECTION(QString htmlTextSectionTitle,
                                                      QString htmlTitleHeaderSize_Type);


    virtual void PROCESS___yri_html_web_html_page_spec(QString htmlPageFileNAME,
                                                       QString htmlPageTitle);


    virtual void PROCESS___yri_html_page_input_header_menu_bar_spec
                            (QString htmlPageInputHeaderMenuBar_string_name_for_later_search_in_file_generator)
    {
        SET___header_menu_bar_SPECIFICATION_name_in_file
            (htmlPageInputHeaderMenuBar_string_name_for_later_search_in_file_generator);
    }


    virtual void PROCESS___yri_html_web_html_page_menu_bar_headers_BODY_spec
                            (QString htmlPageMenuBarHeaders__POSITION);


    virtual void PROCESS___yri_html_page___CURRENT___Widget_SET__button_text(QString button_for_text);

    virtual void PROCESS___yri_html_page___CURRENT___Widget_button__SET_X(QString x);

    virtual void PROCESS___yri_html_page___CURRENT___Widget_button__SET_Y(QString y);

    virtual void PROCESS___yri_html_page___CURRENT___Widget_button__SET_Width(QString width);

    virtual void PROCESS___yri_html_page___CURRENT___Widget_button__SET_Height(QString height);


    virtual void
        PROCESS_Current__yri_html_page_Widget_button();


    virtual void
        PROCESS___yri_html_web_html_page_menu_bar_headers_BODY_element_spec(QString htmlPage_as_menur_bar_linked);



    void save_yri_SOURCE_FILES(QString a_HTML_web_source_FILE_NAME,
                               QString a_HTML_web_source_CONTENT,
                               bool    new_line_at_END = true);


    QString YRI_generate_HTML_web_source_files__AND__SAVE__TO__DISK
                        (QString a_HTML_web_source_FILE_NAME,
                         QString a_HTML_web_source_CONTENT);



    virtual inline void SET___this_GENERATOR_specification_NAME
                            (QString a_this_GENERATOR_specification_NAME)
    {
        _this_GENERATOR_specification_NAME = a_this_GENERATOR_specification_NAME;
    }

    virtual inline QString Get___this_GENERATOR_specification_NAME()
    {
        return _this_GENERATOR_specification_NAME;
    }


    virtual inline void SET___header_menu_bar_SPECIFICATION_name_in_file
                                (QString header_menu_bar_SPECIFICATION_name_in_file)
    {
        _header_menu_bar_SPECIFICATION_name_in_file =
            header_menu_bar_SPECIFICATION_name_in_file;
    }

    virtual inline QString Get___header_menu_bar_SPECIFICATION_name_in_file()
    {
        return _header_menu_bar_SPECIFICATION_name_in_file;
    }


    virtual inline QList<YRITreeHTMLPageBUTTON *> *Get___web_page_Current_Button___LIST()
    {
        return _web_page_Current_Button___LIST;
    }


    virtual inline void SET___web_page_menu_bar_Header
                                (YRITreeHTMLPageMenuBarHeaders *A_WEB_PAGE_MENU_BAR_hEADER)
    {
        _web_page_menu_bar_Header = A_WEB_PAGE_MENU_BAR_hEADER;
    }

    virtual inline YRITreeHTMLPageMenuBarHeaders *Get___web_page_menu_bar_Header()
    {
        return _web_page_menu_bar_Header;
    }


    virtual void SET___webhtmlpageFileNAME(QString            A_webhtmlpageFileNAME,
                                           YRITreeHTMLPage   *A_web_html_pageDATASTRUCTURE);


    virtual inline YRITreeHTMLPage *Get___header_menu_bar_SPECIFICATION_name_in_file
                                        (QString A_webhtmlpageFileNAME)
    {
        return _webhtmlpageFileNAME__To__web_html_pageDATASTRUCTURE
                    .value(A_webhtmlpageFileNAME);
    }


    virtual QPair<int, int> * getCoordinatesXY(YRITreeHTMLNode *a_node)
    {
        return _Webhtmlnode__To__webhtmlpage_absolute_positions.value(a_node);
    }

    virtual void setCoordinatesXY(YRITreeHTMLNode *a_node, QPair<int, int> *a_pair_coordinate);

    virtual inline void setCoordinatesXY(YRITreeHTMLNode    *a_node,
                                         int                x,
                                         int                y)
    {
        setCoordinatesXY(a_node, new QPair<int, int>(x, y));
    }


private:

    uint                            _current_processed_HTML_Page_Current_DIVISION__text_section_HEADER_size;

    QString                         _current_processed_HTML_Page_Current_DIVISION__text_section_Title_STRING;

    QString                         _current_processed_HTML_Page_Current_DIVISION_variable_STRING;

    QString                         _current_processed_HTML_Page_MENU_BAR_link_string;

    QString                         _current_processed_HTML_Page_TItle;

    QString                         _current_processed_HTML_Page;

    QString                         _this_GENERATOR_specification_NAME;

    QString                         _header_menu_bar_SPECIFICATION_name_in_file;


    YRITreeHTMLPageBUTTON           *_web_page_Current_PROCESSED_button;

    QList<YRITreeHTMLPageBUTTON *>  *_web_page_Current_Button___LIST;

    YRITreeHTMLPageMenuBarHeaders   *_web_page_menu_bar_Header;

    /*
     * Each HTML node (element) points to its
     * absolute position pair.
     */
    QMap<YRITreeHTMLNode *, QPair<int, int> *>  _Webhtmlnode__To__webhtmlpage_absolute_positions;

    QMap<QString, QString>                      _WebhtmlpageID__To__webhtmlpage_Section_ID;


    /**
     * A web HTML-Hypertext Makup Language page would be
     * organized as a tree data structure; Modelled here
     * as a Qt-QMap<QString, QString> data structure
     * mapping each tree-HTML-page-node to its content.
     */
    QMap<QString, YRITreeHTMLNode *> 			_webhtmlpageID__To__web_html_pages_nodes;

    QMap<QString, YRITreeHTMLPage *> 			_webhtmlpageFileNAME__To__web_html_pageDATASTRUCTURE;

    QMap<YRITreeHTMLNode *, YRITreeHTMLNode *> 	_webhtmlpageNODE__To__children_NODES;
};


#define DELETE_POINTER_YRI_NOT_NULL(P)\
{\
	if (0 != P) {	\
		delete P; 	\
	}				\
}




#endif //_YERITH_WEB_PAGES_GENERATOR_MAIN_HPP_
