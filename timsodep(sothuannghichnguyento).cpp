#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
int dao (int a)
{
    int res=0;
    while (a>0)
    {
        res=res*10+a%10;
        a/=10;
    }
    return res;
}
bool nt(int a)
{
    if (a<2) return 0;
    for(int i=2;i<=sqrt(a);i++)
        if (a%i==0) return 0;
    return 1;
}
int main()
{
    int a,b;
    cin>>a>>b;
    if (a>b) swap(a,b);
    FORT(i,a,b)
        if (nt(i)&&i!=dao(i)&&nt(dao(i))) cout<<i<<' ';
	return 0;
}
