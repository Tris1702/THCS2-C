#include<stdio.h>

int main()
{
    int n,m,c;
    scanf("%d%d",&n,&m);
    c=m;
    if (n>c) c=n;
    for(int i=n;i>=1;i--,c--)
    {
        int d=0,mm=c-m+1;
        if (c<m) mm=1;
        for(int j=c;j>=mm;j--)
        {
            d++;
            printf("%d",j);
        }
        for(int j=2;d<m;j++)
        {
            d++;
            printf("%d",j);
        }
        printf("\n");
    }
	return 0;
}
