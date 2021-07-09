#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;

int main()
{
    int n,a[100][100]={};
    cin>>n;
    FORT(i,1,n)
        FORT(j,1,i)
            if(j==1||j==n) a[i][j]=1;
            else a[i][j]=a[i-1][j-1]+a[i-1][j];
    FORT(i,1,n)
    {
        FORT(j,1,n-i) cout<<' ';
        FORT(j,1,i) cout<<a[i][j]<<' ';
        cout<<endl;
    }
	return 0;
}
