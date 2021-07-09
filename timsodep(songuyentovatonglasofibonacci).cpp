#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
vector<int> fibo;
void prepare(int a)
{
    int f1=0,f2=1;
    fibo.push_back(0);
    while (f1+f2<=a)
    {
        fibo.push_back(f1+f2);
        int tmp=f1+f2;
        f1=f2;
        f2=tmp;
    }
}
int tcs(int a)
{
    int tmp=0;
    while (a>0)
    {
        tmp+=a%10;
        a/=10;
    }
    return tmp;
}
bool kt(int a)
{
    FORT(i,0,(int)fibo.size()-1)
        if (fibo[i]==a) return 1;
    return 0;
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
    prepare(100);
    int a,b;
    cin>>a>>b;
    if (a>b) swap(a,b);
    FORT(i,a,b)
        if (kt(tcs(i))&&nt(i)) cout<<i<<' ';
	return 0;
}
