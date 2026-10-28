#include<stdio.h>
#include<stdlib.h>
char ch;
int main()
{
	FILE *fp;
	fp=fopen("dataone.txt","w");
	fprintf(fp,"1.c is a easy language\n2.It supports stuctured porgramming\n3.It uses data types like int,char,float,double\n4.It workd on different platforms\n5.Code reusability\n");
	fclose(fp);
	fp=fopen("dataone.txt","a");
	fprintf(fp,"6.He is a cool guy\n7.He teaches in a easy way to umderstand\n8.He regularly conducts test\n9.He helps us to solve leetcode problems\n10.He helpes us to understand c program easily.");
	fclose(fp);
	fp=fopen("dataone.txt","r");
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
    return 0;
}
