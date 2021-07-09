#include<stdio.h>

int main()
{
    int n,m,a[100][100]={},c;
    scanf("%d%d",&n,&m);
    if (n<m) c=m;
    else c=n;
    for(int i=n,j=1;i>=1;i--,j++)
    {
        for(int ii=1;ii<=i;ii++) a[ii][j]=c;
        for(int jj=j;jj<=m;jj++) a[i][jj]=c;
        c--;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++) printf("%d",a[i][j]);
        printf("\n");
    }
	return 0;
}
