#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool ktnt(int a)
{
    for(int i=2;i<=sqrt(a);i++)
        if (a%i==0) return 0;
    return 1;
}
int main()
{
    int n,tong=0;
    scanf("%d",&n);
    for(int i=2;i<n;i++)
        if (ktnt(i)) tong+=i;
    printf("%d",tong);
	return 0;
}
