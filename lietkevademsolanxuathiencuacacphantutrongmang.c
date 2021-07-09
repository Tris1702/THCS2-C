#include<stdio.h>
#include <string.h>
int main()
{
    int m;
    scanf("%d",&m);
    int dd[10000]={},luu[100]={},n=0,a[100]={};
    for(int i=1;i<=m;i++) scanf("%d",&a[i]);
    for(int i=1;i<=m;i++)
    {
        if (dd[a[i]]==0)
        {
            n++;
            luu[n]=a[i];
        }
        dd[a[i]]++;
    }
    for(int i=1;i<=n;i++) printf("%d %d\n",luu[i],dd[luu[i]]);
	return 0;
}
