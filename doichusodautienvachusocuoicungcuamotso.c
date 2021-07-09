#include<stdio.h>
#include<string.h>
int main()
{
    char s[200];
    scanf("%s",s);
    char tmp=s[0];
    s[0]=s[strlen(s)-1];
    s[strlen(s)-1]=tmp;
    int vt=0;
    while (s[vt]=='0') vt++;
    for(int i=vt;i<strlen(s);i++) printf("%c",s[i]);
	return 0;
}
