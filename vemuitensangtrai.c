#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int m1=n-1,m2=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m1;j++) printf("~");
        for(int j=1;j<=m2;j++) printf("*");
        printf("\n");
        m1--;
        m2--;
    }
    m1++;
    m2++;
    for(int i=1;i<n;i++)
    {
        m1++;
        m2++;
        for(int j=1;j<=m1;j++) printf("~");
        for(int j=1;j<=m2;j++) printf("*");
        printf("\n");
    }
	return 0;
}
