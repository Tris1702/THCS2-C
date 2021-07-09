#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<i+m;j++) printf("%d",j);
        printf("\n");
    }
	return 0;
}
