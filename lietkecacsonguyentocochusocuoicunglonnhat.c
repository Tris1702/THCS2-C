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
bool kt(int a)
{
    int tmp=a%10;
    a/=10;
    while (a>0)
    {
        if (tmp<a%10) return 0;
        a/=10;
    }
    return 1;
}
int main()
{
    int n,dem=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        if (nt(i)&&kt(i))
    {
        printf("%d ",i);
        dem++;
    }
    printf("\n%d",dem);
	return 0;
}
