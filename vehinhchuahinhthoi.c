#include<stdio.h>
int main()
{
    int n,d,c;
    scanf("%d",&n);
    for(int i=1,d=n,c=d+1;i<=n;i++,d--,c++)
    {
        for(int j=1;j<=d;j++) printf("*");
        for(int j=d+1;j<c;j++) printf("~");
        for(int j=c;j<=n*2;j++) printf("*");
        printf("\n");
    }
    for(int i=1,d=2,c=2*n-1;i<n;i++,d++,c--)
    {
        for(int j=1;j<=d;j++) printf("*");
        for(int j=d+1;j<c;j++) printf("~");
        for(int j=c;j<=n*2;j++) printf("*");
        printf("\n");
    }
	return 0;
}
