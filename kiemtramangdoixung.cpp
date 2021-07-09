#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+1]={};
    for(int i=1;i<=n;i++) cin>>a[i];
    int d=1,c=n;
    while (d<=c)
    {
        if (a[d]!=a[c])
        {
            cout<<0;
            return 0;
        }
        d++;
        c--;
    }
    cout<<1;
	return 0;
}
