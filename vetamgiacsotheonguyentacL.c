#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int so=1;
    for(int i=1;i<=n;i++)
    {
        if (i%2!=0)
            for(int j=1;j<=i;j++,so++) printf("%d ",so);
        else
        {
            int tmp=so;
            for(int j=tmp+i-1;j>=tmp;j--,so++) printf("%d ",j);
        }
        printf("\n");
    }
	return 0;
}
