#include<stdio.h>

int ucln(int a,int b)
{
    while (a>0)
    {
        if (a<b)
        {
            int tmp=a;
            a=b;
            b=tmp;
        }
        a%=b;
    }
    return b;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",ucln(a,b));
	return 0;
}
