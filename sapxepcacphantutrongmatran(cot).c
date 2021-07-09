#include<stdio.h>

int main()
{
    int n;
    int a[100][100]={};
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++) scanf("%d",&a[i][j]);
    for(int j=1;j<=n;j++)
    {
        for(int i=1;i<=n;i++)
            for(int ii=i;ii<=n;ii++)
                if (a[i][j]<a[ii][j])
                {
                    int tmp=a[i][j];
                    a[i][j]=a[ii][j];
                    a[ii][j]=tmp;
                }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++) printf("%d ",a[i][j]);
        printf("\n");
    }
	return 0;
}
