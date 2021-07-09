#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[100][100]={};
    int so=1;
    for(int j=1;j<=n;j++)
        for(int i=1;i<=j;i++,so++) a[i][j]=so;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            if (a[i][j]==0) printf("    ");
            else printf("%4d",a[i][j]);
        printf("\n");
    }
	return 0;
}
