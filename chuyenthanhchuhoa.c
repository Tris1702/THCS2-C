#include<stdio.h>
#include<string.h>
int main()
{
    char s[100]={};
    fflush(stdin);
    gets(s);
    for(int i=0;i<strlen(s);i++)
    {
        if (s[i]>='a'&&s[i]<='z') s[i]-='a'-'A';
        printf("%c",s[i]);
    }
	return 0;
}
