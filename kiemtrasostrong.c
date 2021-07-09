#include<stdio.h>
int gt(int a)
{
    int tich=1;
    for(int i=1;i<=a;i++)tich*=i;
    return tich;
}
int main()
{
    int n,m,tong=0;
    scanf("%d",&n);
    m=n;
    while (n>0)
    {
        tong+=gt(n%10);
        n/=10;
    }
    if (tong==m) printf("1");
    else printf("0");
	return 0;
}
