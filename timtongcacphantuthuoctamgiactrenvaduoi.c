#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main()
{
    int n,res=0;
    scanf("%d",&n);
    int a[100][100]={};
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++) scanf("%d",&a[i][j]);
    for(int i=1;i<=n;i++)
        for(int j=i+1;j<=n;j++) res+=a[i][j];
    printf("%d ",res);
    res=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<i;j++) res+=a[i][j];
    printf("%d",res);

	return 0;
}
