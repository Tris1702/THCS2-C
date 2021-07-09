#include<stdio.h>
#include<stdbool.h>
bool dd[10000001]={};
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int so;
        scanf("%d",&so);
        if (dd[so]==0)
        {
            dd[so]=1;
            printf("%d ",so);
        }
    }
	return 0;
}
