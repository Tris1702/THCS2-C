#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d",&n);
    m=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++) printf("~");
        if (i==1||i==n)
            for(int j=1;j<=n-i+1;j++) printf("*");
        else
        {
            printf("*");
            for(int j=2;j<n-i+1;j++) printf(".");
            printf("*");
        }
        printf("\n");
        m++;
    }
	return 0;
}
