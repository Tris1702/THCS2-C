#include<stdio.h>
int a[100]={};
void chen(int j,int i)
{
    if (j>=i) return;
    int tmp=a[i];
    while (i>j)
    {
        a[i]=a[i-1];
        i--;
    }
    a[i]=tmp;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int i=2;i<=n;i++)
    {
        int j=1;
        while (a[j]<a[i]) j++;
        chen(j,i);
        for(int j=1;j<=n;j++) printf("%d ",a[j]);
        printf("\n");
    }
	return 0;
}
