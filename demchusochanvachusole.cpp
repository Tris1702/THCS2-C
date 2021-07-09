#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int a,le=0,chan=0;
    cin>>a;
    while (a>0)
    {
        int tmp=a%10;
        if (tmp%2==0) chan++;
        else le++;
        a/=10;
    }
    cout<<le<<' '<<chan;
	return 0;
}
