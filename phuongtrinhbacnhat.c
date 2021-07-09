#include<stdio.h>

int main()
{
    int a,b;
    double nghiem;
    scanf("%d%d",&a,&b);
    if (a==0)
    {
        if (b==0) printf("VSN");
        else printf("VN");
    }
    else
    {
        nghiem=(double)-b/(double)a;
        printf("%.2lf",nghiem);
    }
	return 0;
}
