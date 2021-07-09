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
    int n;
    scanf("%d",&n);
    if (ktnt(n)) printf("1");
    else printf("0");
	return 0;
}
