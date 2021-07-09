#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0,d=0;i<n;i++,d++)
    {
        int c=1+i;
        for(int j=0,kc=n-1;j<=i;j++,kc--)
        {
            printf("%d ",c);
            c+=kc;
        }
        printf("\n");
    }
	return 0;
}
