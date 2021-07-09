#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        if (i>m)
            for(int j=1;j<=m;j++) printf("%c",'@'+m-1);
        else
        {
            for(int j=i;j<=m;j++) printf("%c",'@'+j-1);
            for(int j=1;j<i;j++) printf("%c",'@'+m-1);
        }
        printf("\n");
    }
	return 0;
}
