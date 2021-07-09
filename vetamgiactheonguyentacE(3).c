#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i+=2)
    {
        for(int j=i;j<=2*n-1;j+=2) printf("%d",j);
        printf("\n");
    }
	return 0;
}
