#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x[101][101]={};
    for(int a=1,b=n*2-1,c=n;a<=b;a++,b--,c--)
        for(int i=a;i<=b;i++)
        {
            x[a][i]=c;
            x[b][i]=c;
            x[i][a]=c;
            x[i][b]=c;
        }
    for(int i=1;i<=n*2-1;i++)
    {
        for(int j=1;j<=n*2-1;j++) printf("%d",x[i][j]);
        printf("\n");
    }
	return 0;
}
