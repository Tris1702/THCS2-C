#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a==0)
    {
        if (b==0&&c!=0) printf("NO");
        if (b!=0) printf("%.2lf",(double)-c/(double)b);
    }
    else
    {
        double delt=b*b-4*a*c;
        if (delt<0) printf("NO");
        else
            if (delt==0)
            {
                double x1=((double)-b)/(2.0*a);
                printf("%.2lf",x1);
            }
            else
            {
                double x1=((double)-b+sqrt(delt))/(2.0*a);
                double x2=((double)-b-sqrt(delt))/(2.0*a);
                if (x1<x2)
                {
                    double tmp=x2;
                    x2=x1;
                    x1=tmp;
                }
                printf("%.2lf %.2lf",x1,x2);
            }
    }
	return 0;
}
