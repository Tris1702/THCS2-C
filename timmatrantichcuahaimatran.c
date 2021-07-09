#include<stdio.h>

int main()
{
    int n,m,a[100][100]={},b[100][100]={},c[100][100]={};
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++) scanf("%d",&a[i][j]);
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++) scanf("%d",&b[i][j]);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            for(int k=1;k<=m;k++)
                c[i][j]+=a[i][k]*b[k][j];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++) printf("%d ",c[i][j]);
        printf("\n");
    }
	return 0;
}
