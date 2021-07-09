#include<stdio.h>

int main()
{
    int n,m,p;
    int a[100]={},b[100]={};
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int i=1;i<=m;i++) scanf("%d",&b[i]);
    scanf("%d",&p);
    for(int i=1;i<=p;i++) printf("%d ",a[i]);
    for(int i=1;i<=m;i++) printf("%d ",b[i]);
    for(int i=p+1;i<=n;i++) printf("%d ",a[i]);
	return 0;
}
