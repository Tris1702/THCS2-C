#include<stdio.h>

int main()
{
    int n,p;
    int a[100]={};
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    scanf("%d",&p);
    for(int i=1;i<p;i++) printf("%d ",a[i]);
    for(int i=p+1;i<=n;i++) printf("%d ",a[i]);
	return 0;
}
