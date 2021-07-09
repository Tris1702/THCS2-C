#include<stdio.h>

int nho(int a,int b)
{
    if (a<b) return a;
    return b;
}
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int vt=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=vt;j<=m;j++) printf("%d",j);
        if  (vt>m) printf("%d",vt);
        for(int j=nho(vt,m)-1;j>0;j--) printf("%d",j);
        vt++;
        printf("\n");
    }
	return 0;
}
