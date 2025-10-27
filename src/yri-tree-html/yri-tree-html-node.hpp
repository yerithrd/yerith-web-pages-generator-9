

#ifndef _YRI_TREE_HTML_NODE_HPP_
#define _YRI_TREE_HTML_NODE_HPP_


/**
 * @AUTEUR: Pr. Prof. Dr.-Ing. XAVIER NOUNDOU
 *
 * 		yri-tree-html-node.hpp
 */


#include "../YERITH_WEB_PAGES_GENERATOR_MAIN.hpp"


#include <QtCore/QMap>
#include <QtCore/QString>



class YERITH_WEB_PAGES_GENERATOR_MAIN;



class YRITreeHTMLNode
{
public:


   inline YRITreeHTMLNode(YERITH_WEB_PAGES_GENERATOR_MAIN *a_main_GeNeRATOR_pointer)
    :_is_leaf_node(true),
     _font_SIZE(7),
     _width_box(22),
     _html_node_ID(0)
    {
        YRITreeHTMLNode::_main_generator_pointer = a_main_GeNeRATOR_pointer;

        _html_node_ID = YRITreeHTMLNode::get__HTML_NODES_NEXT_ID();
    }

    inline YRITreeHTMLNode()
    :_is_leaf_node(true),
     _font_SIZE(7),
     _width_box(22),
     _html_node_ID(0)
    {
        _html_node_ID = YRITreeHTMLNode::get__HTML_NODES_NEXT_ID();
    }

    virtual inline ~YRITreeHTMLNode()
    {
    }


    /**
     * Returns an ID always greater than zero ('0').
     */
    static inline uint get__HTML_NODES_NEXT_ID()
    {
        return ++YRITreeHTMLNode::_HTML_NODES_ID_generator_counter;
    }


    /**
     * Generates a HTML 5 and / or other compatible version
     * for a web page presentation on a conventional web
     * such as MOZILLA-firefox.
     *
     * THIS descriptive HTML text contains all children
     * text HTML also !
     *
     * So this method is a recursive descending
     * method-algorithm.
     */
    virtual inline QString generate_html_text_description()
    {
        return "";
    }


    virtual inline void set_font_size(uint Font_SIZE)
    {
        _font_SIZE = Font_SIZE;
    }

    virtual inline uint get_font_size()
    {
        return _font_SIZE;
    }


    virtual inline void set_width_box(uint a_width_box)
    {
        _width_box = a_width_box;
    }

    virtual inline uint get_width_box()
    {
        return _width_box;
    }


    virtual inline void set_html_node_ID(uint a_HTML_page_id)
    {
        _html_node_ID = a_HTML_page_id;
    }

    virtual inline uint get_html_node_ID()
    {
        return _html_node_ID;
    }

    virtual inline QString get_html_node_ID___AS_QString()
    {
        return QString::number(_html_node_ID);
    }



    virtual bool add_child_NODE(YRITreeHTMLNode *a_parent_node);

    virtual inline QMap<uint, YRITreeHTMLNode *> &get_children_NODES()
    {
        return _html_node_ID___TO___children_NODES;
    }



    static inline void set__main_generator_pointer(YERITH_WEB_PAGES_GENERATOR_MAIN *AMAIN_GENErator)
    {
        _main_generator_pointer = AMAIN_GENErator;
    }

    static inline YERITH_WEB_PAGES_GENERATOR_MAIN *get_main_generator_pointer()
    {
        return _main_generator_pointer;
    }



    virtual inline void SET_containing_HTML_Page(YRITreeHTMLPage *a_containing_HTML_Page)
    {
        _containing_HTML_Page = a_containing_HTML_Page;
    }

    virtual inline YRITreeHTMLPage *Get__containing_HTML_Page()
    {
        return _containing_HTML_Page;
    }



    virtual inline void set_parent_NODE(YRITreeHTMLNode *A_parent_NODE)
    {
        _parent_NODE = A_parent_NODE;
    }

    virtual inline YRITreeHTMLNode *get_parent_NODE()
    {
        return _parent_NODE;
    }



    virtual inline void set_IS_leaf_node(bool isleafnode)
    {
        _is_leaf_node = isleafnode;
    }

    virtual inline bool is_leaf_node()
    {
        return _is_leaf_node;
    }


protected:

    static uint                      _HTML_NODES_ID_generator_counter;


    bool					         _is_leaf_node;

    uint                             _font_SIZE;

    uint                             _width_box;

    uint					         _html_node_ID;


    YRITreeHTMLPage                 *_containing_HTML_Page;

    YRITreeHTMLNode 	            *_parent_NODE;


    QMap<uint, YRITreeHTMLNode *>    _html_node_ID___TO___children_NODES;


    static YERITH_WEB_PAGES_GENERATOR_MAIN *_main_generator_pointer;
};



#endif //_YRI_TREE_HTML_NODE_HPP_
