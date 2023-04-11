#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *file;
	char path[100],ch;
	int characters,words,lines;
	printf("enter source file path: ");
	scanf("%s",path);
	file=fopen(path,"r");
	if(file==NULL)
	{
		printf("unable to open the file\n");
		exit(1);
		
	}
	characters=words=lines=0;
	while((ch=fgetc(file)) !=EOF) 
	{
		characters++;
		if(ch == '\n'|| ch=='\0')
		lines++;
		if(ch == ' ' || ch== '\t' || ch=='\n'|| ch=='\0')
		words++;
	}
	if(characters >0)
	{
		words++;
		lines++;
	}
	printf("\n");
	printf("total characters -%d\n",characters);
	printf("total words - %d\n",words);
	printf("total lines- %d\n",lines);
	fclose(file);
	return 0;
}
