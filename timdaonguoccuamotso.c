#include<stdio.h>

int main()
{
    int a,daoa=0;
    scanf("%d",&a);
    while (a>0)
    {
        daoa=daoa*10+a%10;
        a/=10;
    }
    printf("%d",daoa);
	return 0;
}
