// program to find comments
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp,*fp2;
	fp = fopen("program.c","r");
	fp2 = fopen("comments.txt","w");
	
	if(fp==NULL)
	{
		printf("Couldn't open file");
		exit(1);
	}
	
	char ch;
	while((ch=getc(fp))!=EOF)
	{
		if(ch=='/')
		{
			ch = getc(fp);
			if(ch=='/')
			{
				ch = getc(fp);
				while(ch!='\n')
				{
				putc(ch,fp2);
				ch = getc(fp);
			    }
			    putc(' ',fp2);
			}
			else if(ch=='*')
			{
				ch = getc(fp);
				while(ch!='*')
				{	
				//printf("%c",ch);
				putc(ch,fp2);
				ch = getc(fp);
				}
			}
			printf(" ");
		}
	}
	fclose(fp);
	fclose(fp2);
}
