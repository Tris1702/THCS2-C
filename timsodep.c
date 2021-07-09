#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while (n>0)
    {
        int tmp=n%10;
        if (tmp!=0&&tmp!=6&&tmp!=8)
        {
            printf("0");
            return 0;
        }
        n/=10;
    }
    printf("1");
    return 0;
}
