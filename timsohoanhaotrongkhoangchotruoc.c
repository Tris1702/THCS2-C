#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool kt(int a)
{
    int s=1;
    for(int i=2;i<=sqrt(a);i++)
        if (a%i==0)
        {
            s+=i;
            s+=a/i;
        }
    int x=sqrt(a);
    if (x*x==a) s-=x;
    return (s==a);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        int tmp=a;
        a=b;
        b=tmp;
    }
    int ok=0;
    for(int i=a;i<=b;i++)
        if (kt(i))
        {
            ok=1;
            printf("%d ",i);
        }
    if (ok==0) printf("0");
	return 0;
}
