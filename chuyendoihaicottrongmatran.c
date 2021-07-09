#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[100][100]={},c1,c2;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++) scanf("%d",&a[i][j]);
    scanf("%d%d",&c1,&c2);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if (j==c1) printf("%d ",a[i][c2]);
            if (j==c2) printf("%d ",a[i][c1]);
            if (j!=c1&&j!=c2) printf("%d ",a[i][j]);
        }
        printf("\n");
    }
	return 0;
}
