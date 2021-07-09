#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main()
{
    int n,ok=0;
    scanf("%d",&n);
    for(int i=2;i<=sqrt(n);i++)
        while (n%i==0)
        {
            if (ok==0)
            {
                ok=1;
                printf("%d",i);
            }
            else printf("x%d",i);
            n/=i;
        }
    if (n>1) printf("x%d",n);
	return 0;
}
