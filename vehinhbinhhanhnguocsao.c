#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int k=0;
    for(int i=1;i<=n;i++)
    {
        for(int i=1;i<=k;i++) printf("~");
        for(int i=1;i<=m;i++) printf("*");
        printf("\n");
        k++;
    }
    return 0;
}
