#include<iostream>
#include<string>
#include<vector>
#include<math.h>

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
    int n,res=0;
    cin>>n;
    int a[n][n]={};
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++) cin>>a[i][j];
    for(int i=0;i<n;i++)
        for(int j=i;j<n;j++)
            if (nt(a[i][j])) res+=a[i][j];
    cout<<res;
	return 0;
}
