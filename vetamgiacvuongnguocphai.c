#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d",&n);
    m=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++) printf("~");
        for(int j=1;j<=n-i+1;j++) printf("*");
        printf("\n");
        m++;
    }
	return 0;
}
