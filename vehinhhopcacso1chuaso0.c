#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        if (i==1||i==n)
            for(int j=1;j<=m;j++) printf("1");
        else
        {
            printf("1");
            for(int j=2;j<m;j++) printf("0");
            printf("1");
        }
        printf("\n");
    }
	return 0;
}
