#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
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
    bool ok=0;
    int s=0;
    while (a>0)
    {
        s+=a%10;
        if (ok==0&&a%10==6) ok=1;
        a/=10;
    }
    if (ok&&s%10==8) return 1;
    return 0;
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
