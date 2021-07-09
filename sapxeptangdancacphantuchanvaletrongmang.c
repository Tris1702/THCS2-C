#include<stdio.h>
int main()
{
    int n,c=0,l=0;
    int a[1000]={},b[1000]={};
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int so;
        scanf("%d",&so);
        if (so%2==0)
        {
            c++;
            a[c]=so;
        }
        else
        {
            l++;
            b[l]=so;
        }
    }
    for(int i=1;i<=c;i++)
        for(int j=i;j<=c;j++)
            if (a[i]>a[j])
    {
        int tmp=a[i];
        a[i]=a[j];
        a[j]=tmp;
    }
    for(int i=1;i<=l;i++)
        for(int j=i;j<=l;j++)
            if (b[i]>b[j])
    {
        int tmp=b[i];
        b[i]=b[j];
        b[j]=tmp;
    }
    for(int i=1;i<=c;i++) printf("%d ",a[i]);
    for(int i=1;i<=l;i++) printf("%d ",b[i]);
	return 0;
}
