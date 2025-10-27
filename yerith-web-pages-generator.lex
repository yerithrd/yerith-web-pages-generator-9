/*
* @AUTEUR: Pr. Prof. Dr.-Ing. XAVIER NOUNDOU
*/

%option noinput nounput nodefault yylineno
%option noyywrap

%{
#include "YERITH-WEB-PAGES-GENERATOR_HEADING.h"
#include "tok.h"
int yyerror(char *s);
%}


space																		[ \t\n]+
right_arrow															"->"
yerith_web_pages_generator_MAIN					"yerith-web-pages-generator-MAIN"
vertical_left														"vertical-left"
vertical_right													"vertical-right"
horizontal_top 													"horizontal-top"
text_yri_font_size											"text-yri-font-size"
text_yri_width_box											"text-yri-width-box"
VARIABLE_YRI_PARAGRAPH 									"VARIABLE_YRI_PARAGRAPH"
HTML_HEADER_H 													"HTML_HEADER_H"
LI_BEGIN																"li_begin"
LI_END																	"li_end"
LI																			"li"
web_html_page														"web-html-page"
web_html_page_menu_bar_headers					"web-html-page-menu-bar-headers"
web_html_page_menu_bar_headers_Position "web-html-page-menu-bar-headers_Position"
yri_html_page_title											"yri_html_page_title"
yri_html_page_menu_bar_link_string			"yri_html_page_MENU_BAR_link_string"
yri_html_page_section										"yri_html_page_section"
yri_html_page_text_SECTION 							"yri_html_page_text_SECTION"
yri_html_page_Widget_label_text					"yri_html_page_Widget_label_text"
yri_html_page_Widget_button							"yri_html_page_Widget_button"
yri_html_page_input_header_menu_bar			"yri_html_page_input_header_menu_bar"

/* TODO: put '|' sign in comment \& string specification of lexer !*/
comment_string												"#"[ -:;|'\.?!%^&*=-@$_,()`a-zA-Z0-9]*
string																"'"[ -:|\t\n\\.?!%^&*=-@$_,()`a-zA-Z0-9]*"'"
yri_text															"\""[ -:|\t\n\\.?!%^&*=-@$_,()`a-zA-Z0-9]*"\""
unit_text_spec												(m|cm|px)+
num																		[0-9]+
alpha_num															[_a-zA-Z]+[-_0-9a-zA-Z]*
slash																	"/"
equal																	"="
assignment_yri_web										"==="
dot																		"."
coma																	","
semi_colon														";"
colon																	":"
l_bracket															"["
r_bracket															"]"
l_parenthesis													"("
r_parenthesis													")"
l_brace																"{"
r_brace																"}"


%%
{space}            			; /* Do nothing */
{yerith_web_pages_generator_MAIN}						{ yylval.opt_val = new std::string(yytext); return YERITH_WEB_PAGES_GENERATOR_MAIN_TOK; }
{right_arrow}																{ yylval.opt_val = new std::string(yytext); return RIGHT_ARROW_TOK; }
{text_yri_font_size}												{ yylval.opt_val = new std::string(yytext); return TEXT_YRI_FONT_SIZE_TOK; }
{text_yri_width_box}												{ yylval.opt_val = new std::string(yytext); return TEXT_YRI_WIDTH_BOX_TOK; }
{VARIABLE_YRI_PARAGRAPH} 										{ yylval.opt_val = new std::string(yytext); return VARIABLE_YRI_PARAGRAPH_TOK; }
{HTML_HEADER_H} 														{ yylval.opt_val = new std::string(yytext); return HTML_HEADER_H_TOK; }
{LI_BEGIN} 																	{ yylval.opt_val = new std::string(yytext); return LI_BEGIN_TOK; }
{LI_END} 																		{ yylval.opt_val = new std::string(yytext); return LI_END_TOK; }
{LI} 																				{ yylval.opt_val = new std::string(yytext); return LI_TOK; }
{web_html_page}															{ yylval.opt_val = new std::string(yytext); return WEB_HTML_PAGE_TOK; }
{web_html_page_menu_bar_headers}						{ yylval.opt_val = new std::string(yytext); return WEB_HTML_PAGE_MENU_BAR_HEADERS_TOK; }
{web_html_page_menu_bar_headers_Position}		{ yylval.opt_val = new std::string(yytext); return WEB_HTML_PAGE_MENU_BAR_HEADERS_POSITION_TOK; }
{yri_html_page_title}												{ yylval.opt_val = new std::string(yytext); return YRI_HTML_PAGE_TITLE_TOK; }
{yri_html_page_menu_bar_link_string}				{ yylval.opt_val = new std::string(yytext); return YRI_HTML_PAGE_MENU_BAR_LINK_STRING_TOK; }
{yri_html_page_section}											{ yylval.opt_val = new std::string(yytext); return YRI_HTML_PAGE_SECTION_TOK; }
{yri_html_page_text_SECTION}								{ yylval.opt_val = new std::string(yytext); return YRI_HTML_PAGE_TEXT_SECTION_TOK; }
{yri_html_page_Widget_label_text}						{ yylval.opt_val = new std::string(yytext); return YRI_HTML_PAGE_WIDGET_LABEL_TEXT_TOK; }
{yri_html_page_Widget_button}								{ yylval.opt_val = new std::string(yytext); return YRI_HTML_PAGE_WIDGET_BUTTON_TOK; }
{yri_html_page_input_header_menu_bar}				{ yylval.opt_val = new std::string(yytext); return YRI_HTML_PAGE_INPUT_HEADER_MENU_BAR_TOK; }
{comment_string}														{ yylval.opt_val = new std::string(yytext); return COMMENT_STRING_TOK; }
{string}																		{ yylval.opt_val = new std::string(yytext); return STRING_TOK; }
{yri_text}																	{ yylval.opt_val = new std::string(yytext); return YRI_TEXT_TOK; }
{unit_text_spec}														{ yylval.opt_val = new std::string(yytext); return UNIT_TEXT_SPEC_TOK; }
{num}																				{ yylval.opt_val = new std::string(yytext); return NUM_TOK; }
{alpha_num}																	{ yylval.opt_val = new std::string(yytext); return ALPHA_NUM_TOK; }
{slash}																			{ yylval.opt_val = new std::string(yytext); return SLASH_TOK; }
{equal}																			{ yylval.opt_val = new std::string(yytext); return EQUAL_TOK; }
{assignment_yri_web}												{ yylval.opt_val = new std::string(yytext); return ASSIGNMENT_YERITH_WEB_TOK; }
{dot}																				{ yylval.opt_val = new std::string(yytext); return DOT_TOK; }
{coma}																			{ yylval.opt_val = new std::string(yytext); return COMA_TOK; }
{semi_colon}																{ yylval.opt_val = new std::string(yytext); return SEMI_COLON_TOK; }
{colon}																			{ yylval.opt_val = new std::string(yytext); return COLON_TOK; }
{l_bracket}																	{ yylval.opt_val = new std::string(yytext); return LEFT_BRACKET_TOK; }
{r_bracket}																	{ yylval.opt_val = new std::string(yytext); return RIGHT_BRACKET_TOK; }
{l_parenthesis}															{ yylval.opt_val = new std::string(yytext); return LEFT_PARENTHESIS_TOK; }
{r_parenthesis}															{ yylval.opt_val = new std::string(yytext); return RIGHT_PARENTHESIS_TOK; }
{l_brace}																		{ yylval.opt_val = new std::string(yytext); return LEFT_BRACE_TOK; }
{r_brace}																		{ yylval.opt_val = new std::string(yytext); return RIGHT_BRACE_TOK; }
.																						{ std::cerr << "SCANNER "; yyerror(""); exit(1);	}
%%


