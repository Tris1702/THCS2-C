#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
int scs(int a)
{
    int res=0;
    while (a>0)
    {
        res++;
        a/=10;
    }
    return res;
}
int poww(int a,int b)
{
    int res=1;
    for(int i=b;i;i>>=1)
    {
        if (i&1) res*=a;
        a*=a;
    }
    return res;
}
bool kt(int a)
{
    if (a==0) return 0;
    int stmp=0,luua=a,s=scs(a);
    while (a>0)
    {
        stmp+=poww(a%10,s);
        a/=10;
    }
    return (luua==stmp);
}
int main()
{
    int a,b;
    cin>>a>>b;
    if (a>b) swap(a,b);
    bool ok=0;
    FORT(i,a,b)
    if (kt(i))
    {
        ok=1;
        cout<<i<<' ';
    }
    if (ok==0) cout<<0;
	return 0;
}
