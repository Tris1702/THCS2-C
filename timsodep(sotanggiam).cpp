#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
bool nt(int a)
{
    if (a<2) return 0;
    for(int i=2;i<=sqrt(a);i++)
        if (a%i==0) return 0;
    return 1;
}
bool kt1(int a)
{
    int tmp=10;
    while (a>0)
    {
        int tmp2=a%10;
        if (tmp2>=tmp) return 0;
        tmp=tmp2;
        a/=10;
    }
    return 1;
}
bool kt2(int a)
{
    int tmp=-1;
    while (a>0)
    {
        int tmp2=a%10;
        if (tmp2<=tmp) return 0;
        tmp=tmp2;
        a/=10;
    }
    return 1;
}
int main()
{
    int n,bd=1,kt=9,dem=0;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        bd*=10;
        kt=kt*10+9;
    }
    for(int i=bd;i<=kt;i++)
        if (nt(i))
            if (kt1(i)||kt2(i)) dem++;
    cout<<dem;
	return 0;
}
