#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;

int main()
{
    int n,luuc,minn=1e9;
    cin>>n;
    int a[n+1][n+1]={};
    FORT(i,1,n)
        FORT(j,1,n) cin>>a[i][j];
    FORT(j,1,n)
    {
        int stmp=0;
        FORT(i,1,n) stmp+=a[i][j];
        if (stmp<minn)
        {
            minn=stmp;
            luuc=j;
        }
    }
    cout<<luuc<<endl;
    FORT(i,1,n) cout<<a[i][luuc]<<' ';
	return 0;
}
