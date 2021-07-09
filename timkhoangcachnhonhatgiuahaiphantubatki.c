#include<stdio.h>
#include<math.h>
long long a[1000001]={};
int main()
{
    int n,luu1,luu2,minn=1e9,a[100]={};
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int i=1;i<=n;i++)
        for(int j=1;j<i;j++)
            if (abs(a[i]-a[j])<minn)
        {
            minn=abs(a[i]-a[j]);
            luu1=a[i];
            luu2=a[j];
        }
    if (luu1>luu2)
    {
        int tmp=luu1;
        luu1=luu2;
        luu2=tmp;
    }
    printf("%d %d %d",minn,luu1,luu2);
	return 0;
}
