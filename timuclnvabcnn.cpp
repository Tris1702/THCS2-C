#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
int ucln(int a,int b)
{
    while (a>0)
    {
        if (a<b) swap(a,b);
        a%=b;
    }
    return b;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<ucln(a,b)<<' '<<a*b/ucln(a,b);
	return 0;
}
