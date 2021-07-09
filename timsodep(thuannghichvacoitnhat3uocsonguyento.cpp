#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
bool nt(int a)
{
    if (a<2) return 0;
    for(int i=2;i<=sqrt(a);i++)
        if (a%i==0) return 0;
    return 1;
}
int dao(int a)
{
    int res=0;
    while (a>0)
    {
        res=res*10+a%10;
        a/=10;
    }
    return res;
}
bool kt(int a)
{
    if (a!=dao(a)) return 0;
    int dem=0;
    for(int i=2;i<=sqrt(a);i++)
        if (a%i==0)
        {
            if (nt(i)) dem++;
            if (nt(a/i)) dem++;
        }
    int x=sqrt(a);
    if (x*x==a&&nt(x)) dem--;
    return (dem>=3);
}
int main()
{
    int a,b;
    cin>>a>>b;
    if (a>b) swap(a,b);
    FORT(i,a,b)
        if (kt(i)) cout<<i<<' ';
	return 0;
}
