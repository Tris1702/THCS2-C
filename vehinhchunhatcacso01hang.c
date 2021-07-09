#include<stdio.h>
#include<stdbool.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++) printf("%d",i%2);
        printf("\n");
    }
	return 0;
}
