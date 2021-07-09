#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m=1;
    for(int i=1;i<=n;i++,m++)
    {
        if(i%2==0)
            for(int j=2,d=1;d<=m;j+=2,d++) printf("%d",j);
        else
            for(int j=1,d=1;d<=m;j+=2,d++) printf("%d",j);
        printf("\n");
    }
	return 0;
}
