#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool ktnt(int a)
{
    if (a==0||a==1) return 0;
    for(int i=2;i<=sqrt(a);i++)
        if (a%i==0) return 0;
    return 1;
}
int main()
{
    int a,b,res=0;
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        int tmp=a;
        a=b;
        b=tmp;
    }
    for(int i=a;i<=b;i++)
        if (ktnt(i)) res+=i;
    printf("%d",res);
	return 0;
}
