#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int m=0,mm=n*2-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++) printf("~");
        if (i==1||i==n)
            for(int j=1;j<=mm;j++) printf("*");
        else
        {
            printf("*");
            for(int j=2;j<mm;j++) printf(".");
            printf("*");
        }
        printf("\n");
        mm-=2;
        m++;
    }
	return 0;
}
