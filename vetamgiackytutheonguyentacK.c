#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0,d=0;i<n;i++,d++)
    {
        char c='A'+i;
        for(int j=0,kc=n-1;j<=i;j++,kc--)
        {
            printf("%c ",c);
            c+=kc;
        }
        printf("\n");
    }
	return 0;
}
