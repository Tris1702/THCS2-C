#include<stdio.h>

int main()
{
    int n,d,c;
    scanf("%d",&n);
    c=n%10;
    while (n>=10) n/=10;
    d=n%10;
    printf("%d %d",d,c);
	return 0;
}
