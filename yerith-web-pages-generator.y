/*
* @AUTEUR: Pr. Prof. Dr.-Ing. XAVIER NOUNDOU
*/

%{
#include "YERITH-WEB-PAGES-GENERATOR_HEADING.h"


QString my_yerith_last_String;

QString yri_printf(string a_val_str, const char *zeichen = "");

int yyerror(char *s);

int yylex(void);





YERITH_WEB_PAGES_GENERATOR_MAIN *a_web_page_generator_main_page; 

%}


%union{
  int		int_val;
  string*	opt_val;
}

%start	input 

%token	<opt_val>	YERITH_WEB_PAGES_GENERATOR_MAIN_TOK
%token	<opt_val>	TEXT_YRI_FONT_SIZE_TOK
%token	<opt_val>	TEXT_YRI_WIDTH_BOX_TOK
%token	<opt_val>	VARIABLE_YRI_PARAGRAPH_TOK
%token	<opt_val>	HTML_HEADER_H_TOK
%token	<opt_val>	LI_BEGIN_TOK
%token	<opt_val>	LI_END_TOK
%token	<opt_val>	LI_TOK
%token	<opt_val>	WEB_HTML_PAGE_TOK
%token	<opt_val>	WEB_HTML_PAGE_MENU_BAR_HEADERS_TOK
%token	<opt_val>	WEB_HTML_PAGE_MENU_BAR_HEADERS_POSITION_TOK
%token	<opt_val>	YRI_HTML_PAGE_TITLE_TOK
%token	<opt_val>	YRI_HTML_PAGE_MENU_BAR_LINK_STRING_TOK
%token	<opt_val>	YRI_HTML_PAGE_SECTION_TOK
%token	<opt_val>	YRI_HTML_PAGE_TEXT_SECTION_TOK
%token	<opt_val>	YRI_HTML_PAGE_WIDGET_LABEL_TEXT_TOK
%token	<opt_val>	YRI_HTML_PAGE_WIDGET_BUTTON_TOK
%token	<opt_val>	YRI_HTML_PAGE_INPUT_HEADER_MENU_BAR_TOK
%token	<opt_val>	RIGHT_ARROW_TOK
%token	<opt_val>	UNIT_TEXT_SPEC_TOK
%token	<opt_val>	NUM_TOK
%token	<opt_val>	ALPHA_NUM_TOK
%token	<opt_val>	LEFT_BRACKET_TOK
%token	<opt_val>	RIGHT_BRACKET_TOK
%token	<opt_val>	LEFT_PARENTHESIS_TOK
%token	<opt_val>	RIGHT_PARENTHESIS_TOK
%token	<opt_val>	LEFT_BRACE_TOK
%token	<opt_val>	RIGHT_BRACE_TOK
%token	<opt_val>	SLASH_TOK
%token	<opt_val>	EQUAL_TOK
%token	<opt_val>	ASSIGNMENT_YERITH_WEB_TOK
%token	<opt_val>	DOT_TOK
%token	<opt_val>	SEMI_COLON_TOK
%token	<opt_val>	COLON_TOK
%token	<opt_val>	COMA_TOK
%token	<opt_val>	COMMENT_STRING_TOK
%token	<opt_val>	STRING_TOK
%token	<opt_val>	YRI_TEXT_TOK

%type	<opt_val>	yri_html_web_pages_generator_main_spec
%type	<opt_val>	yri_html_web_html_page_menu_bar_headers_spec
%type	<opt_val>	yri_html_web_html_page_menu_bar_headers_BODY_spec
%type	<opt_val>	yri_html_web_html_page_spec
%type	<opt_val>	yri_html_page_text_SECTION_spec
%type	<opt_val>	yri_html_page_SECTION_spec
%type	<opt_val>	yri_html_page_SECTION_elements_spec
%type	<opt_val>	yri_html_page_text_SECTION_LisT_boDY_spec
%type	<opt_val>	yri_html_page_text_SECTION_LisT_spec
%type	<opt_val>	yri_html_page_text_SECTION_BodY_SPECSIZES_spec
%type	<opt_val>	yri_html_page_text_SECTION_BodY_TEXTSPECIFICATION_spec

%left	SEMI_COLON_TOK
%left	COMA_TOK
%left	COLON_TOK
%left	RIGHT_ARROW_TOK

%%

input : /* empty */
			| YERITH_WEB_PAGES_GENERATOR_MAIN_TOK ALPHA_NUM_TOK
					LEFT_BRACE_TOK 
						yri_html_web_pages_generator_main_spec 	
					RIGHT_BRACE_TOK																																	{ a_web_page_generator_main_page->PROCESS___start_input($2->c_str());
																																														yri_printf($1->c_str(), "yerith_web_pages_generator_main_spec"); 
																																														yri_printf($2->c_str(), "spec name"); 
																																														if (0 != a_web_page_generator_main_page) { a_web_page_generator_main_page->Generate__ALL__HTML__related_Web_PAGES($2->c_str()); a_web_page_generator_main_page->generate_buttons_CSS___Content($2->c_str());} }
			;

yri_html_web_pages_generator_main_spec 
											: /* empty */
											| COMMENT_STRING_TOK yri_html_web_pages_generator_main_spec 				{ a_web_page_generator_main_page->PROCESS___comments(yylen, $1->c_str()); }
										 	| yri_html_web_html_page_spec 																			{ printf("yri_html_web_html_page_spec\n"); }
											| yri_html_web_html_page_menu_bar_headers_spec  										{ printf("yri_html_web_html_page_menu_bar_headers_spec\n"); }
											;

yri_html_web_html_page_menu_bar_headers_spec 
											: WEB_HTML_PAGE_MENU_BAR_HEADERS_TOK  		
													LEFT_BRACE_TOK
														yri_html_web_html_page_menu_bar_headers_BODY_spec
													RIGHT_BRACE_TOK SEMI_COLON_TOK 
															yri_html_web_pages_generator_main_spec 				
											;	

yri_html_web_html_page_menu_bar_headers_BODY_spec 
		: /* empty */
		| COMMENT_STRING_TOK yri_html_web_html_page_menu_bar_headers_BODY_spec								{ a_web_page_generator_main_page->PROCESS___comments(yylen, $1->c_str()); }
		|	WEB_HTML_PAGE_MENU_BAR_HEADERS_POSITION_TOK EQUAL_TOK STRING_TOK SEMI_COLON_TOK 	  { yri_printf($3->c_str(), "WEB_HTML_PAGE_MENU_BAR_HEADERS_POSITION_TOK "); 
																																															a_web_page_generator_main_page
																																																	->PROCESS___yri_html_web_html_page_menu_bar_headers_BODY_spec($3->c_str()); }
				yri_html_web_html_page_menu_bar_headers_BODY_spec
		|	yri_html_page_SECTION_spec																													{ /* printf("- yri_html_page_SECTION_spec -\n"); */ }	
		;										

yri_html_web_html_page_spec 
		: WEB_HTML_PAGE_TOK ALPHA_NUM_TOK	 																										{ yri_printf($1->c_str(), "WEB_HTML_PAGE_TOK"); 
																																														a_web_page_generator_main_page->Set_current_processed_HTML_Page($2->c_str()); }
				LEFT_BRACE_TOK
					yri_html_web_html_page_BODY_spec
				RIGHT_BRACE_TOK	SEMI_COLON_TOK														
						yri_html_web_pages_generator_main_spec													
		;

yri_html_web_html_page_BODY_spec 
		: /* empty */
		| COMMENT_STRING_TOK 	yri_html_web_html_page_BODY_spec																{ a_web_page_generator_main_page->PROCESS___comments(yylen, $1->c_str()); }
		| YRI_HTML_PAGE_TITLE_TOK COLON_TOK STRING_TOK SEMI_COLON_TOK													{ yri_printf($3->c_str(), "yri_html_page_title"); 
																																														a_web_page_generator_main_page
																																																->PROCESS___yri_html_web_html_page_spec(a_web_page_generator_main_page->GetCurrent_processed_HTML_Page(),
																																																																				$3->c_str()); }
				yri_html_web_html_page_BODY_spec	
 		| YRI_HTML_PAGE_MENU_BAR_LINK_STRING_TOK COLON_TOK STRING_TOK SEMI_COLON_TOK					{ yri_printf($3->c_str(), "yri_html_page_MENU_BAR_link_string"); 
																																														a_web_page_generator_main_page
																																																->PROCESS___yri_html_web_html_page__MENU_BAR_link_string__spec($3->c_str()); }
				yri_html_web_html_page_BODY_spec	
		|	YRI_HTML_PAGE_INPUT_HEADER_MENU_BAR_TOK  																						{ yri_printf($1->c_str(), "yri_html_page_input_header_menu_bar"); }
				LEFT_BRACKET_TOK 
					WEB_HTML_PAGE_MENU_BAR_HEADERS_TOK 																							{ a_web_page_generator_main_page->PROCESS___yri_html_page_input_header_menu_bar_spec($1->c_str()); }
				RIGHT_BRACKET_TOK SEMI_COLON_TOK yri_html_web_html_page_BODY_spec	
		| YRI_HTML_PAGE_TEXT_SECTION_TOK  																										{ yri_printf($1->c_str(), "yri_html_page_text_SECTION_spec\n"); }
					LEFT_PARENTHESIS_TOK
						HTML_HEADER_H_TOK SLASH_TOK NUM_TOK SEMI_COLON_TOK STRING_TOK 								{ a_web_page_generator_main_page->PROCESS___yri_html_page_text_SECTION($8->c_str(), 
																																																																																 $6->c_str()); }
					RIGHT_PARENTHESIS_TOK
				LEFT_BRACE_TOK
						yri_html_page_text_SECTION_BodY_spec
				RIGHT_BRACE_TOK SEMI_COLON_TOK
		| YRI_HTML_PAGE_WIDGET_BUTTON_TOK																				{ a_web_page_generator_main_page->PROCESS_Current__yri_html_page_Widget_button(); } 
				LEFT_PARENTHESIS_TOK 
					STRING_TOK 																												{a_web_page_generator_main_page->PROCESS___yri_html_page___CURRENT___Widget_SET__button_text($4->c_str()); }
				RIGHT_PARENTHESIS_TOK 
					LEFT_BRACE_TOK  
						STRING_TOK SEMI_COLON_TOK	STRING_TOK SEMI_COLON_TOK STRING_TOK	{ a_web_page_generator_main_page->PROCESS___yri_html_page___CURRENT___Widget_button__SET_X($8->c_str()); 
																																							a_web_page_generator_main_page->PROCESS___yri_html_page___CURRENT___Widget_button__SET_Y($10->c_str()); 
																																							a_web_page_generator_main_page->PROCESS___yri_html_page___CURRENT___Widget_button__SET_Width($12->c_str()); }
							SEMI_COLON_TOK STRING_TOK																			{ a_web_page_generator_main_page->PROCESS___yri_html_page___CURRENT___Widget_button__SET_Height($15->c_str()); }
					RIGHT_BRACE_TOK																										{  } 
						SEMI_COLON_TOK yri_html_web_html_page_BODY_spec									
		| YRI_HTML_PAGE_WIDGET_LABEL_TEXT_TOK																						{ yri_printf($1->c_str(), "yri_html_page_Widget_label_text"); } 
				LEFT_PARENTHESIS_TOK 
					STRING_TOK 																																{ yri_printf($1->c_str(), "yri_html_page_Widget_button name string_tok"); }
				RIGHT_PARENTHESIS_TOK 
					LEFT_BRACE_TOK  
						STRING_TOK SEMI_COLON_TOK	STRING_TOK SEMI_COLON_TOK STRING_TOK					{ yri_printf($8->c_str(), "yri_html_page_Widget_label_text x"); 
																																											yri_printf($10->c_str(), "yri_html_page_Widget_label_text y");
																																											yri_printf($12->c_str(), "yri_html_page_Widget_label_text width"); }
							SEMI_COLON_TOK STRING_TOK																							{ yri_printf($15->c_str(), "yyri_html_page_Widget_label_text heigth"); }
					RIGHT_BRACE_TOK																							 
						SEMI_COLON_TOK yri_html_web_html_page_BODY_spec
		;

yri_html_page_text_SECTION_BodY_spec
		: /* empty */ 																																				
		| VARIABLE_YRI_PARAGRAPH_TOK ALPHA_NUM_TOK																			{ my_yerith_last_String = yri_printf($2->c_str(), "VARIABLE_YRI_PARAGRAPH_TOK"); 
																																											a_web_page_generator_main_page->PROCESS__VARIABLE_YRI_PARAGRAPH_creation_DStructure(my_yerith_last_String); } 
				yri_html_page_text_SECTION_BodY_SPECSIZES_spec 
				yri_html_page_text_SECTION_BodY_TEXTSPECIFICATION_spec
				yri_html_page_text_SECTION_LisT_spec
	  ;

yri_html_page_text_SECTION_LisT_spec 
		: /* empty */
		| LI_BEGIN_TOK COLON_TOK STRING_TOK
				yri_html_page_text_SECTION_LisT_boDY_spec
		| LI_END_TOK COLON_TOK STRING_TOK
		;

yri_html_page_text_SECTION_LisT_boDY_spec
		: LI_TOK COLON_TOK STRING_TOK yri_html_page_text_SECTION_LisT_boDY_spec
		| yri_html_page_text_SECTION_BodY_spec 																					{ printf("yri_html_page_text_SECTION_BodY_spec\n"); }
		;			

yri_html_page_text_SECTION_BodY_TEXTSPECIFICATION_spec 
		: /* empty */ 
		|	LEFT_BRACE_TOK 
				TEXT_YRI_FONT_SIZE_TOK EQUAL_TOK NUM_TOK																		{ yri_printf($4->c_str(), "TEXT_YRI_FONT_SIZE_TOK"); 
																																											a_web_page_generator_main_page
																																													->PROCESS___yri_html_page_text_SECTION_BodY_TEXTSPECIFICATION_spec_FONT_SIZE($4->c_str()); } 
			RIGHT_BRACE_TOK COLON_TOK
			LEFT_BRACE_TOK
				TEXT_YRI_WIDTH_BOX_TOK EQUAL_TOK NUM_TOK UNIT_TEXT_SPEC_TOK									{ yri_printf($11->c_str(), "TEXT_YRI_WIDTH_BOX_TOK"); 
																																											a_web_page_generator_main_page
																																													->PROCESS___yri_html_page_text_SECTION_BodY_TEXTSPECIFICATION_spec_DIV_BOX_WIDTH($11->c_str(),
																																																																																					 $12->c_str());
																																														yri_printf($12->c_str(), "UNIT_TEXT_SPEC_TOK"); }
			RIGHT_BRACE_TOK ASSIGNMENT_YERITH_WEB_TOK 																		{ yri_printf($2->c_str(), "ASSIGNMENT_YERITH_WEB_TOK"); } 
				YRI_TEXT_TOK 																																{ my_yerith_last_String = yri_printf($15->c_str(), "YRI_TEXT_TOK");
																																											a_web_page_generator_main_page
																																													->PROCESS___yri_html_page_text_SECTION_BodY_TEXTSPECIFICATION_spec_DIV_BOX_TEXT(my_yerith_last_String); }
		 | yri_html_page_text_SECTION_LisT_spec 
		;

yri_html_page_text_SECTION_BodY_SPECSIZES_spec : /* empty */ 
																							 																			{ a_web_page_generator_main_page
																																													->PROCESS___yri_html_page_text_SECTION_BodY_SPECSIZES_spec(); }
																							 ;

yri_html_page_SECTION_spec 
		: YRI_HTML_PAGE_SECTION_TOK 
				LEFT_BRACKET_TOK
					yri_html_page_SECTION_elements_spec 																			{ /*printf("yri_html_page_SECTION_elements_spec ***\n");*/ }
				RIGHT_BRACKET_TOK SEMI_COLON_TOK
		;

yri_html_page_SECTION_elements_spec 
		: /* empty */
		| yri_html_page_SECTION_elements_spec COMA_TOK ALPHA_NUM_TOK  									{ a_web_page_generator_main_page->PROCESS___yri_html_web_html_page_menu_bar_headers_BODY_element_spec($3->c_str());  }
		| yri_html_page_SECTION_elements_spec ALPHA_NUM_TOK 														{ a_web_page_generator_main_page->PROCESS___yri_html_web_html_page_menu_bar_headers_BODY_element_spec($2->c_str());  }
		;

%%


QString yri_printf(string a_val_str, const char *zeichen /* = "" */)
{
	QString ret_val_string;

	static bool init_zeichen = true;

	if (init_zeichen)
	{
		a_web_page_generator_main_page = new YERITH_WEB_PAGES_GENERATOR_MAIN;

		init_zeichen = false;
	}
	
	extern char *yytext;	// defined and maintained in lex.c
	
	if (0 != yylval.opt_val)
	{
		ret_val_string = QString(yylval.opt_val->c_str());

		printf("[%s] %s: %s\n", zeichen, a_val_str.c_str(), yylval.opt_val->c_str());
	}

	return ret_val_string;
}


int yyerror(string s)
{
  extern int yylineno;	// defined and maintained in lex.c
  extern char *yytext;	// defined and maintained in lex.c
  
  cerr << "ERROR: " << s << " at symbol \"" << yytext;
  cerr << "\" on line " << yylineno << endl;
  exit(1);
}


int yyerror(char *s)
{
  return yyerror(string(s));
}

