#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
bool kthh(int n)
{
    int tong=1,x=sqrt(n);
    for(int i=2;i<=x;i++)
        if (n%i==0)
        {
            tong+=i;
            tong+=n/i;
        }
    if (x*x==n) tong-=x;
    return (tong==n);
}
int main()
{
    int n;
    cin>>n;
    for(int i=6;i<=n;i++)
        if (kthh(i)) cout<<i<<' ';
	return 0;
}
