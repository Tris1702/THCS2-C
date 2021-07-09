#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=n-i-1;j<=2*n-2*i-1;j++) printf("%c",j+'A');
        printf("\n");
    }
	return 0;
}
