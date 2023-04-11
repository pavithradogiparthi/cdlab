#include<stdio.h>
//#include<conio.h>
void main(){
    char s[5];
    printf("enter any operator");
    gets(s);
    switch(s[0]){
        case'>':if(s[1]=='=')
                printf("\ngreater than or equal");
                else
                printf("\ngreater than");
                break;
        case'<':if(s[1]=='=')
                printf("\nless than or equal");
                else
                printf("\nless than");
                break;
        case'=':if(s[1]=='=')
                printf("\nEqual to");
                else
                printf("\nassignment");
                break;
        case'!':if(s[1]=='=')
                printf("\nnot equal to");
                else
                printf("\nBit not");
                break;
        case'&':if(s[1]=='&')
                printf("\nlogical and");
                else
                printf("\nbitwise and");
                break;
        case'|':if(s[1]=='|')
                printf("\n logical or");
                else
                printf("\n bitwise or");
                break;
        case'+':printf("\naddition");
                break;
        case'-':printf("\nsubtraction");
                break;
        case'*':printf("\nmultiplication");
                break;
        case'/':printf("\ndivision");
                break;
        case'%':printf("\nmodulus");
                break;
        default:printf("\nnot a valid operator");
    }
    //getch();
}
