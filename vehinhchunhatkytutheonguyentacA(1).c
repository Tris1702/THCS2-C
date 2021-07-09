#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int c=n;
    char a[100][100]={};
    if (m>c) c=m;
    for(int i=1;i<=n;i++)
    {
        for(int ii=i;ii<=n;ii++) a[ii][i]=(c-1)+'a';
        for(int ii=i;ii<=m;ii++) a[i][ii]=(c-1)+'a';
        c--;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++) printf("%c",a[i][j]);
        printf("\n");
    }
	return 0;
}
