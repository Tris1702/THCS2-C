#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+1]={},dd[1000]={};
    FORT(i,1,n)
    {
        cin>>a[i];
        dd[a[i]]++;
    }
    FORT(i,1,n)
        if (dd[a[i]]>1)
        {
            cout<<a[i]<<' ';
            dd[a[i]]=0;
        }
	return 0;
}
