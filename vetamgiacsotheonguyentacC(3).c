#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m=0;
    for(int i=1;i<=n;i++,m++)
    {
        for(int j=1;j<=m;j++) printf("~");
        for(int j=1;j<=n-i+1;j++) printf("%d",j);
        printf("\n");
    }
	return 0;
}
