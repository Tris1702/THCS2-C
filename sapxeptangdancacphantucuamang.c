#include<stdio.h>
int main()
{
    int n;
    int a[1000]={};
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int i=1;i<=n;i++)
        for(int j=i;j<=n;j++)
            if (a[i]<a[j])
    {
        int tmp=a[i];
        a[i]=a[j];
        a[j]=tmp;
    }
    for(int i=n;i>=1;i--) printf("%d ",a[i]);
	return 0;
}
