#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        if (i>m)
            for(int j=m;j>=1;j--) printf("%c",'A'+j-1);
        else
        {
            for(int j=i;j<=m;j++) printf("%c",'A'+j-1);
            for(int j=i-1;j>=1;j--) printf("%c",'A'+j-1);
        }
        printf("\n");
    }
	return 0;
}
