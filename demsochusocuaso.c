#include<stdio.h>

int main()
{
    int a,dem=0;
    scanf("%d",&a);
    while (a>0)
    {
        dem++;
        a/=10;
    }
    printf("%d",dem);
	return 0;
}
