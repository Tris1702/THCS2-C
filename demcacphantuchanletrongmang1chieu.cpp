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
    vector<int> c,l;
    cin>>n;
    FORT(i,1,n)
    {
        int so;
        cin>>so;
        if (so%2==0) c.push_back(so);
        else l.push_back(so);
    }
    cout<<c.size()<<' ';
    FORT(i,0,(int)c.size()-1) cout<<c[i]<<' ';
    cout<<endl;
    cout<<l.size()<<' ';
    FORT(i,0,(int)l.size()-1) cout<<l[i]<<' ';
	return 0;
}
