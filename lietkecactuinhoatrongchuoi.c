#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define kc " "
bool kt (char *s)
{
	for(int i=0;i<strlen(s);i++)
		if (s[i]>='a'&&s[i]<='z') return 0;
	return 1;
}
int main()
{
	char s[100]={};
	char *stmp;
	gets(s);
	stmp=strtok(s,kc);
	while (stmp!=NULL)
	{
		if (kt(stmp)) printf("%s ",stmp);
		stmp=strtok(NULL,kc);
	}
	return 0;
}