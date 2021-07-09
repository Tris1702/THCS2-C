#include<stdio.h>

int main()
{
    int n,m1=0,m2=0;
    scanf("%d",&n);
    int a[100]={},b[100]={};
    for(int i=1;i<=n;i++)
    {
        int so;
        scanf("%d",&so);
        if (so%2==0)
        {
            m1++;
            a[m1]=so;
        }
        else
        {
            m2++;
            b[m2]=so;
        }
    }
    for(int i=1;i<=m1;i++) printf("%d ",a[i]);
    printf("\n");
    for(int i=1;i<=m2;i++) printf("%d ",b[i]);
	return 0;
}
