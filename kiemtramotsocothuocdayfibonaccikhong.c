#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int f1=0,f2=1;
    while (f2<n)
    {
        int tmp=f1+f2;
        f1=f2;
        f2=tmp;
    }
    if (n==0||f2==n) printf("1");
    else printf("0");
	return 0;
}
