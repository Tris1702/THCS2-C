#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    b=a;
    int daoa=0;
    while (a>0)
    {
        daoa=daoa*10+a%10;
        a/=10;
    }
    if (daoa==b) printf("1");
    else printf("0");
	return 0;
}
