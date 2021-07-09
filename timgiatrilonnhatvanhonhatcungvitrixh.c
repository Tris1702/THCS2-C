#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[1000]={};
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    int maxx=-1e9,minn=1e9,luu1,luu2;
    for(int i=1;i<=n;i++)
        if (maxx<=a[i])
        {
            maxx=a[i];
            luu1=i;
        }
    for(int i=1;i<=n;i++)
        if (minn>=a[i])
        {
            minn=a[i];
            luu2=i;
        }
    printf("%d %d\n%d %d",maxx,luu1,minn,luu2);
	return 0;
}
