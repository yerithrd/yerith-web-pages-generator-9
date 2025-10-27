
/**
 * @AUTEUR: Pr. Prof. Dr.-Ing. XAVIER NOUNDOU
 *
 * 		yri-tree-html-PAGE-text-section.cpp
 */


#include "yri-tree-html-PAGE-text-section.hpp"


#include "utils/YRI_CPP_UTILS.hpp"



void YRITreeHTMLPageTextSECTION::SET__html_page_text_section_Content_STRING(QString Some_text_section_Content_STRING)
{
//    QDEBUG_STRING_OUTPUT_2("Some_text_section_Content_STRING",
//                            Some_text_section_Content_STRING);

    Some_text_section_Content_STRING = Some_text_section_Content_STRING.replace("\n", "<br/>");

    _text_section_Content_STRING = Some_text_section_Content_STRING;
}
