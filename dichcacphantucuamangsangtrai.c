#include<stdio.h>
int main()
{
    int n,vt;
    scanf("%d",&n);
    int a[1000]={};
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    scanf("%d",&vt);
    vt%=n;
    for(int i=vt+1;i<=n;i++) printf("%d ",a[i]);
    for(int i=1;i<=vt;i++) printf("%d ",a[i]);
	return 0;
}
