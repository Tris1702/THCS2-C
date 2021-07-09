#include<stdio.h>
#include<string.h>
int main()
{
    char a[100]={};
    int dd[1000]={},luu[100]={};
    fflush(stdin);
    gets(a);
    int n=0;
    for(int i=0;i<strlen(a);i++)
        if (a[i]=='2'||a[i]=='3'||a[i]=='5'||a[i]=='7')
        {
            if (dd[a[i]-'0']==0)
            {
                n++;
                luu[n]=a[i]-'0';
            }
            dd[a[i]-'0']++;

        }
    for(int i=1;i<=n;i++) printf("%d %d\n",luu[i],dd[luu[i]]);
    return 0;
}
