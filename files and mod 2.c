#include<stdio.h>
#include<stdlib.h>
char ch;
int main()
{
	FILE *fp;
	fp=fopen("datatwo.txt","a");
	fprintf(fp," Karuppu");
	fclose(fp);
	fp=fopen("datatwo.txt","r");
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
	return 0;
}
