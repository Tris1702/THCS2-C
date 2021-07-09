#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[100]={},dd[1000]={};
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        dd[a[i]]++;
    }
    int ok=0;
    for(int i=1;i<=n;i++)
        if (dd[a[i]]==1)
        {
            ok=1;
            printf("%d ",a[i]);
        }
    if (!ok) printf("0");
    return 0;
}
