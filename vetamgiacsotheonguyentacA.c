#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int m=n-1,d=0,c=0;
    for(int i=1;i<=n;i++,m--,d++)
    {
        for(int j=1;j<=m;j++) printf("~");
        for(int j=d;j>=0;j--) printf("%d",j);
        for(int j=1;j<=d;j++) printf("%d",j);
        printf("\n");
    }
	return 0;
}
