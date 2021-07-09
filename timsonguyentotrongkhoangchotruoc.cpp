#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
bool nt(int a)
{
    if (a<2) return 0;
    for(int i=2;i<=sqrt(a);i++)
        if(a%i==0) return 0;
    return 1;
}
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
        if (nt(i)) cout<<i<<' ';
	return 0;
}
