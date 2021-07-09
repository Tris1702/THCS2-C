#include<stdio.h>

int main()
{
    long long gt=1;
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++) gt*=i;
    printf("%lld",gt);
	return 0;
}
