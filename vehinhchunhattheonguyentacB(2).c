#include<stdio.h>

int main()
{
    int n,m,kt;
    scanf("%d%d",&n,&m);
    kt=m;
    for(int i=n;i>=1;i--)
    {
        int dem=0;
        for(int j=i;j<=kt;j++)
        {
            printf("%d",j);
            dem++;
        }
        for(;dem<m;dem++) printf("%d",m);
        printf("\n");
    }
	return 0;
}
