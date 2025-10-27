
/**
 * @AUTEUR: Pr. Prof. Dr.-Ing. XAVIER NOUNDOU
 *
 * 		yri-tree-html-node.cpp
 */


#include "yri-tree-html-node.hpp"



uint YRITreeHTMLNode::_HTML_NODES_ID_generator_counter                    = 0;

YERITH_WEB_PAGES_GENERATOR_MAIN *YRITreeHTMLNode::_main_generator_pointer = 0;



bool YRITreeHTMLNode::add_child_NODE(YRITreeHTMLNode *a_parent_node)
{
    if (0 == a_parent_node)
    {
        return false;
    }

    _html_node_ID___TO___children_NODES
        .insert(a_parent_node->get_html_node_ID(),
                a_parent_node);

    return true;
}
