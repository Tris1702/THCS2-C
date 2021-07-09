#include<stdio.h>

int main()
{
    int a,b,c,maxx;
    scanf("%d %d %d",&a,&b,&c);
    maxx=a;
    if (b>maxx) maxx=b;
    if (c>maxx) maxx=c;
    printf("%d",maxx);
    return 0;
}
