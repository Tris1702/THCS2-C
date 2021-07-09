#include<stdio.h>
int main()
{
    int n,dem=0;
    scanf("%d",&n);
    int a[100]={},dd[1000]={},luu[100]={};
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        dd[a[i]]++;
    }
    for(int i=1;i<=n;i++)
        if (dd[a[i]]>1)
        {
            dem++;
            luu[dem]=a[i];
            dd[a[i]]=0;
        }
    printf("%d\n",dem);
    for(int i=1;i<=dem;i++) printf("%d ",luu[i]);
	return 0;
}
