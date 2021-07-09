#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool kt(int a)
{
    if (a<2) return 0;
    for(int i=2;i<=sqrt(a);i++)
        if(a%i==0) return 0;
    return 1;
}
int tcs(int a)
{
    int tmp=0;
    while (a>0)
    {
        tmp+=a%10;
        a/=10;
    }
    return tmp;
}
int main()
{
    int n,dem=0;
    scanf("%d",&n);
    for(int i=2;i<n;i++)
        if (kt(i)&&tcs(i)%5==0)
        {
            dem++;
            printf("%d ",i);
        }
    printf("\n%d",dem);
	return 0;
}
