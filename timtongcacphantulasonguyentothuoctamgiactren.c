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
    int n,res=0;
    scanf("%d",&n);
    int a[100][100]={};
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++) scanf("%d",&a[i][j]);
    for(int i=1;i<=n;i++)
        for(int j=i;j<=n;j++)
            if (nt(a[i][j])) res+=a[i][j];
    printf("%d",res);
	return 0;
}
