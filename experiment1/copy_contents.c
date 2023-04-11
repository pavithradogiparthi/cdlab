#include<stdio.h>
int main(){
    FILE *fptr1, *fptr2;
    char file1[]="source1.txt";
    char file2[]="source2.txt";
    char curr;

    fptr1=fopen(file1,"r");
    fptr2=fopen(file2,"w");

    curr=getc(fptr1);
    while(1){
        putc(curr,fptr2);
        curr=getc(fptr1);

        if(curr==EOF) break;
    }
    fclose(fptr1);
    fclose(fptr2);
}
