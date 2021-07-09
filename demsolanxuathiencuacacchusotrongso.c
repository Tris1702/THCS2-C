#include<stdio.h>
#include <string.h>
int main()
{
    char s[19];
    int dd[15]={},luu[15]={},n=0;
    scanf("%s",&s);
    for(int i=0;i<strlen(s);i++)
    {
        int tmp=s[i]-'0';
        if (dd[tmp]==0)
        {
            n++;
            luu[n]=tmp;
        }
        dd[tmp]++;
    }
    for(int i=1;i<=n;i++) printf("%d %d\n",luu[i],dd[luu[i]]);
	return 0;
}
