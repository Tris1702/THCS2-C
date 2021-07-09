#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
int tcs(int a)
{
    int tong=0;
    while (a>0)
    {
        tong+=a%10;
        a/=10;
    }
    return tong;
}
int dao (int a)
{
    int tmp=0;
    while (a>0)
    {
        tmp=tmp*10+a%10;
        a/=10;
    }
    return tmp;
}
int main()
{
    int a,dem=0,tmp1=1,tmp2=9;
    cin>>a;
    for(int i=2;i<=a;i++)
    {
        tmp1*=10;
        tmp2=tmp2*10+9;
    }
    for(int i=tmp1;i<=tmp2;i++)
        if (tcs(i)%10==0 && dao(i)==i) dem++;
    cout<<dem;
	return 0;
}
