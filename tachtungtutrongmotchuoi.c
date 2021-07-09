#include<stdio.h>
#include<string.h>
#define kc " "
int main()
{
	char s[100]={},tanso[100][100]={};
	char *stmp;
	gets(s);
	stmp=strtok(s,kc);
	while (stmp!=NULL)
	{
		printf("%s\n",stmp);
		stmp=strtok(NULL,kc);
	}
	return 0;
}