#include<stdio.h>
#include<stdbool.h>
int tcs(int a)
{
    int tmp=0;
    while (a>0)
    {
        tmp+=a%10;
        a/=10;
    }
    return tmp;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if (tcs(a)>tcs(b))
    {
        int tmp=a;
        a=b;
        b=tmp;
    }
    printf("%d %d",a,b);
	return 0;
}
