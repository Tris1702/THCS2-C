#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[100]={},ok=1;
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int i=n;i>=2;i--)
    {
        if (ok==0) break;
        for(int j=2;j<=i;j++)
            if(a[j-1]>a[j])
        {
            int tmp=a[j-1];
            a[j-1]=a[j];
            a[j]=tmp;
        }
        ok=0;
        for(int j=1;j<=n;j++)
        {
            printf("%d ",a[j]);
            if (j>1&&a[j-1]>a[j]) ok=1;
        }
        printf("\n");
    }
	return 0;
}
