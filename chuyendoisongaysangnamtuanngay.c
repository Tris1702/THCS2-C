#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d ",n/365);
    n-=n/365*365;
    printf("%d ",n/7);
    n-=n/7*7;
    printf("%d",n);

	return 0;
}
