%{
    #include<stdio.h>
    int lc=0,sc=0,tc=0,ch=0;
%}
%%
\n lc++;
([ ])+ sc++;
\t tc++;
. ch++;
%%
int yywrap(){
    return 1;
}
int main(){
    yylex();
    printf("\n no. of lines=%d",lc);
    printf("\n no. of spaces = %d",sc);
    printf("\n no. of tabs = %d",tc);
    printf("\n No. of other characters = %d",ch);
    return 0;
}
