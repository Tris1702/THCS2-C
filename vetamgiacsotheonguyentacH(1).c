#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int m=n-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++) printf("~");
        for(int j=0;j<i;j++) printf("%d",j*2+1);
        for(int j=i-2;j>=0;j--) printf("%d",j*2+1);
        printf("\n");
        m--;
    }
	return 0;
}
