%{
	/* definitions */
	#include "parser.tab.h"
%}

%option yylineno
%option noyywrap

%x mul_comment
%x sin_comment
INTEGER 0|[1-9][0-9]*
DOUBLE (0|[1-9][0-9]*)\.[0-9]+d
CHAR '[a-zA-Z0-9\\n\$\|\^]'
NEWLINE \n
STRING \".+\"
CNAME [A-Z][a-zA-Z0-9]*
ID  [a-zA-Z_][a-zA-Z0-9_]*
comment (\t\n)?.*


	/* rules */
%%

"int" {printf("int\n"); return T_INT;}
"char" {printf("char\n"); return T_CHAR;}
"double" {printf("double\n"); return T_DOUBLE;}
"boolean" {printf("boolean\n"); return T_BOOLEAN;}
"String" {printf("String\n"); return T_STRING;}
"class" {printf("class\n"); return T_CLASS;}
"new" {printf("new\n"); return T_NEW;}
"return" {printf("return\n"); return T_RETURN;}
"void" {printf("void\n"); return T_VOID;}
"if" {printf("if\n"); return T_IF;}
"else" {printf("else\n"); return T_ELSE;}
"while" {printf("while\n"); return T_WHILE;}
"do" {printf("do\n"); return T_DO;}
"for" {printf("for\n"); return T_FOR;}
"switch" {printf("switch\n"); return T_SWITCH;}
"case" {printf("case\n"); return T_CASE;}
"default" {printf("default\n"); return T_DEFAULT;}
"break" {printf("break\n"); return T_BREAK;}
"true" {printf("true\n"); return T_TRUE;}
"false" {printf("false\n"); return T_FALSE;}
"public" {printf("public\n"); return T_PUBLIC;}
"private" {printf("private\n"); return T_PRIVATE;}
"out" {printf("out\n"); return T_OUT;}
"print" {printf("print\n"); return T_PRINT;}


{INTEGER} {printf("Integer: %s\n", yytext); return T_INTEGER_VAL;}
{DOUBLE} {printf("Double: %s\n", yytext); return T_DOUBLE_VAL;}
{CHAR} {printf("Char: %s\n", yytext); return T_CHAR_VAL;}
{CNAME} {printf("Class Name: %s\n", yytext); return T_CNAME;}
{ID} {printf("Identifier: %s\n", yytext); return T_ID;}
{STRING} {printf("String: %s\n", yytext); return T_STRING_VAL;}
{NEWLINE} {printf("New Line\n"); return T_NEWLINE;}


"=" {printf("ASSIGN\n"); return T_ASSIGN;}
"+" {printf("PLUS\n"); return T_PLUS;}
"-" {printf("MINUS\n"); return T_MINUS;}
"*" {printf("MULTIPLY\n"); return T_MULTIPLY;}
"/" {printf("DIVIDE\n"); return T_DIVIDE;}
"%" {printf("MODULO\n"); return T_MODULO;}
">" {printf("GREATER\n"); return T_GREATER;}
"<" {printf("LESS\n"); return T_LESS;}
"==" {printf("EQUALS\n"); return T_EQUALS;}
"!=" {printf("NOT EQUALS\n"); return T_NEQUALS;}
"&&" {printf("AND\n"); return T_AND;}
"||" {printf("OR\n"); return T_OR;}
"("  {printf("LEFT PARANTHESIS\n"); return T_LPAR;}
")"  {printf("RIGHT PARANTHESIS\n"); return T_RPAR;}
"{"  {printf("LEFT BRACE\n"); return T_LBRACES;}
"}"  {printf("RIGHT BRACE\n"); return T_RBRACES;}
"["  {printf("LEFT BRACKET\n"); return T_LBR;}
"]"  {printf("RIGHT BRACKET\n"); return T_RBR;}
"."  {printf("DOT\n"); return T_DOT;}
","  {printf("COMMA\n"); return T_COMMA;}
":"  {printf("COLON\n"); return T_COLON;}
";"  {printf("SEMICOLON\n"); return T_SEMICOLON;}
"\"" {printf("QUOTES\n"); return T_QUOTES;} 

"/*" {BEGIN(mul_comment); printf("COMMENT START\n"); }
<mul_comment>"*/" {BEGIN(INITIAL); printf("COMMENT END");}
<mul_comment>\n {return T_NEWLINE; }
<mul_comment>.  {printf("%c", *yytext); return T_COMMENT;}

"//" {BEGIN(sin_comment); printf("COMMENT START\n"); }
<sin_comment>\n {BEGIN(INITIAL); printf("COMMENT END");}
<sin_comment>.  {printf("%c", *yytext); return T_COMMENT;}


<<EOF>> {printf("End of File\n"); return T_EOF;}

[ \t] {  }

. { /*ignore*/ }


%%
