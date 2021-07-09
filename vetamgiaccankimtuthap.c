#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int m=n-1,mm=1;
    for(int i=1;i<=n;i++)
    {
        for(int i=1;i<=m;i++) printf("~");
        for(int i=1;i<=mm;i++) printf("*");
        printf("\n");
        mm+=2;
        m--;
    }
	return 0;
}
