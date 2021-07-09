#include<stdio.h>

int main()
{
    int a,b,tong=0;
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        int tmp=a;
        a=b;
        b=tmp;
    }
    for(int i=a;i<=b;i++) tong+=i;
    printf("%d",tong);
	return 0;
}
