#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[100][100]={},h1,h2;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++) scanf("%d",&a[i][j]);
    scanf("%d%d",&h1,&h2);
    for(int i=1;i<=n;i++)
    {
        int ii=i;
        if (ii==h1) ii=h2;
        else if (ii==h2) ii=h1;
        for(int j=1;j<=m;j++) printf("%d ",a[ii][j]);
        printf("\n");
    }
	return 0;
}
