#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++) printf("%d",j*2+1);
        for(int j=i-2;j>=0;j--) printf("%d",j*2+1);
        printf("\n");
    }
	return 0;
}
