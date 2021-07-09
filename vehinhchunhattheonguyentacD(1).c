#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int d=1,c=m;
    for(int i=1;i<=n;i++)
    {
        for(int j=d,k=1;j>=1&&k<=m;j--,k++) printf("%d",j);
        for(int j=2;j<=c;j++) printf("%d",j);
        d++;
        c--;
        printf("\n");
    }
	return 0;
}
