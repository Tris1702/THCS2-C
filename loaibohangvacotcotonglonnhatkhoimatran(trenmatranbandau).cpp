#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;

int main()
{
    int n,m,luuh,luuc,maxx=0;
    cin>>n>>m;
    int a[m+1][n+1]={};
    FORT(i,1,m)
        FORT(j,1,n) cin>>a[i][j];
    FORT(i,1,m)
    {
        int stmp=0;
        FORT(j,1,n) stmp+=a[i][j];
        if (stmp>maxx)
        {
            maxx=stmp;
            luuh=i;
        }
    }
    maxx=0;
    FORT(j,1,n)
    {
        int stmp=0;
        FORT(i,1,m) stmp+=a[i][j];
        if (stmp>maxx)
        {
            maxx=stmp;
            luuc=j;
        }
    }
    FORT(i,1,m)
        if (i!=luuh)
        {
            FORT(j,1,n)
                if (j!=luuc) cout<<a[i][j]<<' ';
            cout<<endl;
        }
	return 0;
}
