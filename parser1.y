%{
	/* definitions */
#include <stdio.h>

extern FILE *yyin;
extern int yylex();
extern int yylineno;
extern char *yytext;
int max_err = 0;

void yyerror(const char *message);
%}

%define parse.error verbose

	/* tokens */

%token T_INT
%token T_CHAR
%token T_DOUBLE
%token T_BOOLEAN
%token T_STRING
%token T_CLASS
%token T_NEW
%token T_RETURN
%token T_VOID
%token T_IF
%token T_ELSE
%token T_WHILE
%token T_DO
%token T_FOR
%token T_SWITCH
%token T_CASE
%token T_DEFAULT
%token T_BREAK
%token T_TRUE
%token T_FALSE
%token T_PUBLIC
%token T_PRIVATE
%token T_OUT
%token T_PRINT



%token T_INTEGER_VAL
%token T_DOUBLE_VAL
%token T_CHAR_VAL
%token T_CNAME
%token T_ID
%token T_STRING_VAL
%token T_NEWLINE "NEW LINE"



%token T_ASSIGN
%token T_PLUS
%token T_MINUS
%token T_MULTIPLY
%token T_DIVIDE
%token T_MODULO
%token T_GREATER
%token T_LESS
%token T_EQUALS
%token T_NEQUALS
%token T_AND
%token T_OR
%token T_LPAR
%token T_RPAR
%token T_LBRACES
%token T_RBRACES
%token T_LBR
%token T_RBR
%token T_DOT
%token T_COLON
%token T_SEMICOLON
%token T_COMMA
%token T_QUOTES
%token T_COMMENT
%token T_EOF 0




	/* rules */

%%
start 	  	  : program start
		    | error T_NEWLINE {yyerrok;}
		    | %empty
		    ;

program           : class newline
		    ;

comment           : T_DIVIDE T_MULTIPLY T_COMMENT T_MULTIPLY T_DIVIDE
		    ;

class 		  : T_PUBLIC T_CLASS cname T_LBRACES newline attribute T_RBRACES
		    ;

nested            : class T_NEWLINE nested
		    | %empty
		    ;

cname 		  : T_CNAME
		    ;

attribute         : amodifier variable T_SEMICOLON newline attribute 
		    | method
		    ;

amodifier 	  : T_PRIVATE
		    | T_PUBLIC
		    |%empty
		    ;

variable	  : T_INT int 
                    | T_CHAR char 
		    | T_DOUBLE double 
		    | T_BOOLEAN boolean  
                    | T_STRING String
                    ;

int               : int_set
		    | int_assign 
		    ;

int_set		  : id T_COMMA int_set
		    | id
                    ;  

id		  : T_ID
		    ; 

int_assign        : id T_ASSIGN expression T_COMMA int_assign 
		    | id T_ASSIGN expression  
                    ;

char              : char_set
		    | char_assign
		    ;

char_set 	  : id T_COMMA char_set 
		    | id
                    ; 

char_assign	  : id T_ASSIGN T_CHAR_VAL T_COMMA char_assign 
		    | id T_ASSIGN T_CHAR_VAL 
                    ;

CHAR		  : T_CHAR_VAL
		    ;

double            : double_set
		    | double_assign
		    ;

double_assign	  : id T_ASSIGN expression T_COMMA double_assign 
	 	    | id T_ASSIGN expression
		    ;

double_set 	  : id T_COMMA double_set 
		    | id
                    ; 

boolean           : boolean_set
		    | boolean_assign
		    ;

boolean_set 	  : id T_COMMA boolean_set 
		    | id
                    ; 

boolean_assign	  : id T_ASSIGN BOOLEAN T_COMMA boolean_assign 
		    | id T_ASSIGN BOOLEAN
		    ;

BOOLEAN 	  : T_TRUE 
		    | T_FALSE
		    ;
 
String            : String_set
		    | String_assign
		    ;

String_set 	  : id T_COMMA String_set 
		    | id
                    ; 

String_assign	  : id T_ASSIGN T_STRING_VAL T_COMMA String_assign 
		    | id T_ASSIGN T_STRING_VAL 
		    ;

STRING 		  : T_STRING_VAL
		    ;

method            : mmodifier type id T_LPAR values T_RPAR T_LBRACES newline mattribute commands T_RBRACES newline method 
		    | nested
                    ;

mattribute	  : amodifier variable T_SEMICOLON newline mattribute
		    | %empty
		    ;


mmodifier 	  : T_PUBLIC
		    | T_PRIVATE
		    ;
	
type              : T_INT 
	            | T_CHAR 
                    | T_DOUBLE 
                    | T_BOOLEAN 
	            | T_STRING 
  	            | T_VOID
                    ;
  
values            : arg 
	            | arg2
   	            | %empty
                    ;

arg               : T_INT id T_COMMA arg 
	            | T_CHAR id T_COMMA arg 
	            | T_DOUBLE id T_COMMA arg 
                    | T_BOOLEAN id T_COMMA arg
	            | T_STRING id T_COMMA arg 
	            | arg2
                    ;

arg2	          : T_INT id 
	            | T_CHAR id 
	            | T_DOUBLE id 
	            | T_BOOLEAN id 
	            | T_STRING id
                    ;

commands 	  : assign newline commands 
		    | object newline commands
		    | access newline commands
		    | do newline commands 
		    | for newline commands
		    | if newline commands
		    | switch newline commands
		    | print newline commands
		    | return newline commands
		    | break newline commands
		    | %empty
		    ;

object 		  : cname id T_ASSIGN T_NEW cname T_LPAR val T_RPAR T_SEMICOLON
		    ;


val 		  : val1 
		    | val2 
		    | %empty
		    ;

val1		  : INTEGER T_COMMA val1 
		    | CHAR T_COMMA val1 
		    | DOUBLE T_COMMA val1 
		    | BOOLEAN T_COMMA val1 
		    | STRING T_COMMA val1 
		    | val2
		    ;

INTEGER	  	  : T_INTEGER_VAL
		    ;

DOUBLE	 	  : T_DOUBLE_VAL
		    ;

val2		  : INTEGER
		    | CHAR 
		    | DOUBLE
		    | BOOLEAN 
		    | STRING
		    ;

access 		  : id T_DOT id T_SEMICOLON 
		    | id T_DOT id T_LPAR T_RPAR T_SEMICOLON
		    ;

assign 		  : id T_ASSIGN expression T_SEMICOLON
		    ; 

expression	  : literal 
		    | id T_DOT id T_LPAR T_RPAR  
		    | T_NEW cname T_LPAR val T_RPAR 
	            | operation
		    ;

newline 	  : T_NEWLINE newline
		    | T_NEWLINE
		    ;

operation 	  : literal operator literal 
		    | operation operator operation
		    | operation operator literal 
		    | literal operator operation
		    | T_LPAR operation T_RPAR
		    | literal
		    ;

literal	 	  : val2 
		    | id
		    ;

operator	  : T_PLUS
		    | T_MINUS 
		    | T_MULTIPLY
		    | T_DIVIDE
		    ;

do	          : T_DO T_LBRACES newline commands T_RBRACES newline T_WHILE T_LPAR cond T_RPAR T_SEMICOLON
                   ;		    

cond              : log_expr1 
		    | log_expr2
                    ;

log_expr1         : T_LPAR log_expr2 T_RPAR log_oper log_expr1 
		    | T_LPAR log_expr2 T_RPAR;

log_expr2         :  id oper second_operand ;

oper              : comp_oper
		    | log_oper;

comp_oper         :  T_GREATER 
		    | T_LESS 
		    | T_EQUALS 
		    | T_NEQUALS ;

second_operand    : INTEGER 
		    | DOUBLE 
		    | CHAR 
		    | BOOLEAN 
		    | id
		    ;

log_oper          : T_AND 
		    | T_OR
		    ;


for             : T_FOR T_LPAR int_loop id T_ASSIGN INTEGER T_SEMICOLON id comp_oper INTEGER T_SEMICOLON for_assign T_RPAR T_LBRACES newline commands T_RBRACES 
		    ;

int_loop        : T_INT
                    | %empty 
		    ;

for_assign      : id T_ASSIGN id operator INTEGER 
		    ;

if              : T_IF T_LPAR cond T_RPAR T_LBRACES newline commands T_RBRACES else_com
		    ;

else_com        : else_if else_com
                    | newline else
	            | %empty
                    ;

else_if         : T_ELSE T_IF T_LPAR cond T_RPAR T_LBRACES newline commands T_RBRACES 
		    ;  

else            : T_ELSE T_LBRACES newline commands T_RBRACES
               	    ;

switch          : T_SWITCH T_LPAR operation T_RPAR T_LBRACES newline T_CASE val2 T_COLON newline commands case default T_RBRACES
                    ;

case            : T_CASE val2 T_COLON newline commands case 
                    | %empty
                    ;

default		: T_DEFAULT T_COLON newline commands 
                    |%empty
                    ; 

print           : T_OUT T_DOT T_PRINT T_LPAR T_STRING_VAL var_print T_RPAR T_SEMICOLON
		    ;

var_print       : T_COMMA id var_print
		    | %empty
		    ; 

return          : T_RETURN operation T_SEMICOLON
                    ;

break           : T_BREAK T_SEMICOLON
		    ;








%%

int main(int argc, char *argv[]) {
	if (argc>1) {
		yyin = fopen(argv[1], "r");
		if (yyin==NULL) {
			perror("Error opening file");
			return -1;
		}
	}
	yyparse();


	fclose(yyin);
	if(max_err>=1)
		printf("Unsuccessful parsing, total errors: %d", max_err);
	else if(max_err==0)
		printf("Successful parsing, no errors detected");
	return 0;

}

void yyerror(const char *message) {
	max_err ++;
	printf("Error at line %d caused by %s : %s\n", yylineno, yytext, message);
}
