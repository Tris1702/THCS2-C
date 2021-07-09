#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int mm=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=mm;j++) printf("~");
        if (i==1||i==n)
            for(int j=1;j<=m;j++) printf("*");
        else
        {
            printf("*");
            for(int j=2;j<m;j++) printf(".");
            printf("*");
        }
        printf("\n");
        mm++;
    }
    return 0;
}
