#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
int dao(int a)
{
    int res=0;
    while (a>0)
    {
        res=res*10+a%10;
        a/=10;
    }
    return res;
}
int main()
{
    int n;
    vector<int> res;
    cin>>n;
    FORT(i,1,n)
    {
        int so;
        cin>>so;
        if (so>9&&so==dao(so)) res.push_back(so);
    }
    cout<<res.size()<<' ';
    FORT(i,0,(int)res.size()-1) cout<<res[i]<<' ';
	return 0;
}
