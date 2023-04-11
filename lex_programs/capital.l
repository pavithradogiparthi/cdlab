%{
	#include<stdio.h>
%}

%%
[A-Z] {printf("%s capital letter\n", yytext);}
. {printf("%s not a capital letter\n", yytext);}
\n {return 0;}
%%

int main( ) 
{
	printf("Enter some string with capital words in between\n");
	yylex();
}

int yywrap( )
{
	return 1;
}
