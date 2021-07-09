#include<stdio.h>

int main()
{
    int n,minn=1e9,maxx=-1e9;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int so;
        scanf("%d",&so);
        if (so<minn) minn=so;
        if (so>maxx) maxx=so;
    }
    printf("%d %d",maxx,minn);
	return 0;
}
