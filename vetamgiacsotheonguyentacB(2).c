#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int m=n-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++) printf("~");
        for(int j=1;j<=n-m;j++) printf("%d",i);
        m--;
        printf("\n");
    }
	return 0;
}
