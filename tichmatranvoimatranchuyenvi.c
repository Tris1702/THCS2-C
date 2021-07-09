#include<stdio.h>
int n,m,a[100][100]={},b[100][100]={},c[100][100]={};
void nhan()
{
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            for(int k=1;k<=m;k++)
                c[i][j]+=a[i][k]*b[k][j];
}
void chuyenvi()
{
    for(int j=1;j<=m;j++)
        for(int i=1;i<=n;i++) b[j][i]=a[i][j];
}
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++) scanf("%d",&a[i][j]);
    chuyenvi();
    nhan();
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++) printf("%d ",c[i][j]);
        printf("\n");
    }
	return 0;
}
