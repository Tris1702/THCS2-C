#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool nt(int a)
{
    if (a<2) return 0;
    for(int i=2;i<=sqrt(a);i++)
        if (a%i==0) return 0;
    return 1;
}
int main()
{
    int n,maxx=-1,luu;
    int a[100][100]={};
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++) scanf("%d",&a[i][j]);
    for(int i=1;i<=n;i++)
    {
        int dem=0;
        for(int j=1;j<=n;j++)
            if (nt(a[i][j])) dem++;
        if (dem>maxx)
        {
            maxx=dem;
            luu=i;
        }
    }
    printf("%d\n",luu);
    for(int j=1;j<=n;j++)
        if (nt(a[luu][j])) printf("%d ",a[luu][j]);
	return 0;
}
