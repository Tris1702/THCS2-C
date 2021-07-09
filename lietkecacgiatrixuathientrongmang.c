#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n;
    bool dd[10000]={},dda[10000]={};
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int so;
        scanf("%d",&so);
        if (so<0&&dda[-so]==0)
        {
            printf("%d ",so);
            dda[-so]=1;
        }
        if (so>=0&&dd[so]==0)
        {
            printf("%d ",so);
            dd[so]=1;
        }
    }
	return 0;
}
