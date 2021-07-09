#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[100]={};
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int i=1;i<n;i++)
    {
        int minn=i;
        int ok=1;
        for(int j=i+1;j<=n;j++)
            if (a[j]<a[minn]) minn=j;
        int tmp=a[i];
        a[i]=a[minn];
        a[minn]=tmp;
        for(int i=1;i<=n;i++) printf("%d ",a[i]);
        printf("\n");
    }
	return 0;
}
