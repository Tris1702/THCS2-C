#include<stdio.h>
int main()
{
    int n,vt;
    scanf("%d",&n);
    int a[1000]={};
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    scanf("%d",&vt);
    vt%=n;
    for(int i=n-vt+1;i<=n;i++) printf("%d ",a[i]);
    for(int i=1;i<=n-vt;i++) printf("%d ",a[i]);
	return 0;
}
