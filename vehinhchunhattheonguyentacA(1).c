#include<stdio.h>

int main()
{
    int n,m,a[100][100]={},c;
    scanf("%d%d",&n,&m);
    if (n<m) c=m;
    else c=n;
    for(int i=1;i<=n;i++)
    {
        for(int ii=i;ii<=n;ii++)
            for(int jj=i;jj<=m;jj++) a[ii][jj]=c;
        c--;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++) printf("%d",a[i][j]);
        printf("\n");
    }
	return 0;
}
