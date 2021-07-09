#include<stdio.h>

int main()
{
    int n,demc=0,deml=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int so;
        scanf("%d",&so);
        if (so%2==0) demc++;
        else deml++;
    }
    printf("%d %d",demc,deml);
	return 0;
}
