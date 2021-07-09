#include<stdio.h>

int main()
{
    int n;
    int a[1000]={};
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int i=n;i>=1;i--) printf("%d ",a[i]);
	return 0;
}
