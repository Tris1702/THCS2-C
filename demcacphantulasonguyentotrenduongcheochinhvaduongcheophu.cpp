#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
int n,dem=0;
bool dd[100000]={};
bool nt(int a)
{
    if (a<2) return 0;
    for(int i=2;i<=sqrt(a);i++)
        if (a%i==0) return 0;
    return 1;
}
int main()
{
    cin>>n;
    int a[n+1][n+1]={};
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++) cin>>a[i][j];
    for(int i=1;i<=n;i++)
    {
        if (nt(a[i][i])) dem++;
        if (nt(a[i][n-i+1])) dem++;
    }
    if (n%2!=0&&nt(a[(n+1)/2][(n+1)/2])) dem--;
    cout<<dem;
	return 0;
}
