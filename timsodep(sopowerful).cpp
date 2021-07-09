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
bool kt(int a)
{
    for(int i=2;i<=sqrt(a);i++)
        if (a%i==0&&nt(i))
    {
        if (a%(i*i)==0) return 1;
        if (nt(a/i))
            if(a%((a/i)*(a/i))==0) return 1;
    }
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
