#include<stdio.h>
#include<string.h>
int main()
{
    int p;
    char a[100]={},b[100]={};
    fflush(stdin);
    gets(a);
    gets(b);
    scanf("%d",&p);
    for(int i=0;i<p-1;i++) printf("%c",a[i]);
    for(int i=0;i<strlen(b);i++) printf("%c",b[i]);
    for(int i=p-1;i<strlen(a);i++) printf("%c",a[i]);
	return 0;
}
