%{
	#include<stdio.h>
	int vow=0, con=0;
%}

%%
[ \t\n]+    ;
[aeiouAEIOU]+    {printf("%s is a vowel",yytext);}
[^aeiouAEIOU]     {printf("%s is a constonantl",yytext);}
%%

int main( )
{
	printf("Enter some input string:\n");
	yylex();
	printf("Number of vowels=%d\n",vow);
	printf("Number of consonants=%d\n",con);
}

int yywrap( )
{
	return 1;
}
