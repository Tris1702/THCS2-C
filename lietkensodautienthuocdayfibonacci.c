#include<stdio.h>

int main()
{
    long long f1=0,f2=1;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%lld ",f1);
        long long tmp=f1;
        f1=f2;
        f2+=tmp;
    }
	return 0;
}
