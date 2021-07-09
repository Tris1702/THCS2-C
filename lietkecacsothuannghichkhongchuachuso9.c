#include<stdio.h>
#include<stdbool.h>
bool kt(int a)
{
    int tmp=0,luua=a;
    while (a>0)
    {
        if (a%10==9) return 0;
        tmp=tmp*10+a%10;
        a/=10;
    }
    return (luua==tmp);
}
int main()
{
    int n,dem=0;
    scanf("%d",&n);
    for(int i=2;i<n;i++)
        if (kt(i))
    {
        printf("%d ",i);
        dem++;
    }
    printf("\n%d",dem);
	return 0;
}
