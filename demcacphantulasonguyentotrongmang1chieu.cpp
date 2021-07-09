#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
bool nt(int a)
{
    if (a<2) return 0;
    for(int i=2;i<=sqrt(a);i++)
        if (a%i==0) return 0;
    return 1;
}
int main()
{
    int n;
    cin>>n;
    vector<int> res;
    FORT(i,1,n)
    {
        int so;
        cin>>so;
        if (nt(so)) res.push_back(so);
    }
    cout<<res.size()<<' ';
    FORT(i,0,(int)res.size()-1) cout<<res[i]<<' ';
	return 0;
}
