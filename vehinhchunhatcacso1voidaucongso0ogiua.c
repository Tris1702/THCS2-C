#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        if (n%2==0&&(i==n/2||i==n/2+1))
            for(int j=1;j<=m;j++) printf("0");
        else
            if (n%2!=0&&i==(n+1)/2)
                for(int j=1;j<=m;j++) printf("0");
            else
                for(int j=1;j<=m;j++)
                {
                    if (m%2==0&&(j==m/2||j==m/2+1)) printf("0");
                    else
                        if (m%2!=0&&j==(m+1)/2) printf("0");
                        else printf("1");
                }
        printf("\n");
    }
	return 0;
}
