#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=n;i>=1;i--)
    {
        if (i>m)
            for(int j=1;j<=m;j++) printf("%c",'@'+m);
        else
        {
            for(int j=i;j<=m;j++) printf("%c",'@'+j);
            for(int j=1;j<i;j++) printf("%c",'@'+m);
        }
        printf("\n");
    }
	return 0;
}
