#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        int d=0,mm=m-1;
        if (i>m) mm=i;
        for(int j=i;j<=m;j++)
        {
            d++;
            printf("%d",j);
        }
        for(int j=mm;d<m;j--)
        {
            d++;
            printf("%d",j);
        }
        printf("\n");
    }
	return 0;
}
