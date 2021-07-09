#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int cd,cr;
    cin>>cd>>cr;
    if (cd<=0||cr<=0)
    {
        cout<<0;
        return 0;
    }
    cout<<(cd+cr)*2<<' '<<cd*cr;
	return 0;
}
