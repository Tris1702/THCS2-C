#include<stdio.h>
#include<string.h>
#define kc " "
int main()
{
	char s[100]={},bo[100]={};
	char *stmp;
	gets(s);
	gets(bo);
	stmp=strtok(s,kc);
	while (stmp!=NULL)
	{
		if (strcmp(stmp,bo)) printf("%s ",stmp);
		stmp=strtok(NULL,kc);
	}
	return 0;
}