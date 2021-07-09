#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[100001]={},b[100001]={};
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        b[n-i+1]=a[i];
    }
    for(int i=1;i<=n;i++)
        if (a[i]!=b[i])
    {
        printf("0");
        return 0;
    }
    printf("1");
	return 0;
}
