#include<stdio.h>

int main()
{
    int n,m;
    int a[100][100]={};
    scanf("%d",&n);
    m=n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++) scanf("%d",&a[i][j]);
    for(int i=1;i<=n;i++)
    {
        int stmp=0;
        for(int j=1;j<=m;j++) stmp+=a[i][j];
        printf("%d ",stmp);
    }
    printf("\n");
	for(int j=1;j<=m;j++)
    {
        int stmp=0;
        for(int i=1;i<=n;i++) stmp+=a[i][j];
        printf("%d ",stmp);
    }
	return 0;
}
