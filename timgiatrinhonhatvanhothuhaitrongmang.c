#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[1000]={};
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    int maxx1=1e9,maxx2=1e9;
    for(int i=1;i<=n;i++)
        if (maxx1>a[i]) maxx1=a[i];
    for(int i=1;i<=n;i++)
        if (maxx2>a[i]&&a[i]>maxx1) maxx2=a[i];
    printf("%d %d",maxx1,maxx2);
	return 0;
}
