#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n;
    bool ok=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if (ok)
            for(int j=1;j<=i;j++) printf("%d",j);
        else
            for(int j=i;j>=1;j--) printf("%d",j);
        printf("\n");
        ok=!ok;
    }
	return 0;
}
