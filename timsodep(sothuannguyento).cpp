#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
bool nt(long long a)
{
    if (a<2) return 0;
    for(long long i=2;i<=sqrt(a);i++)
        if (a%i==0) return 0;
    return 1;
}
int tcs(long long a)
{
    int res=0;
    while (a>0)
    {
        res+=a%10;
        a/=10;
    }
    return res;
}
bool cs(long long a)
{
    if (a==0) return 0;
    while (a>0)
    {
        if(nt(a%10)==0) return 0;
        a/=10;
    }
    return 1;
}
int main()
{
    long long a,b,dem=0;
    cin>>a>>b;
    if (a>b) swap(a,b);
    for(long long i=a;i<=b;i++)
        if (nt(i)&&cs(i)&&nt(tcs(i))) dem++;
    cout<<dem;
	return 0;
}
