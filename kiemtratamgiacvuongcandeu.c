#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a==b&&b==c&&a==c)
    {
        printf("3");
        return 0;
    }
    if (a==b||a==c||b==c)
    {
        printf("2");
        return 0;
    }
    printf("1");
	return 0;
}
