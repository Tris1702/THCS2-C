#include<stdio.h>
#include<string.h>
int main()
{
    char s[100]={};
    int demcc=0,demkt=0,demcs=0;
    fflush(stdin);
    gets(s);
    for(int i=0;i<strlen(s);i++)
    {
        if ((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')) demcc++;
        else
            if (s[i]>='0'&&s[i]<='9') demcs++;
            else demkt++;
    }
    printf("%d %d %d",demcc,demcs,demkt);
	return 0;
}
