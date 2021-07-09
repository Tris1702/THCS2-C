#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n,so;
    cin>>n;
    so=n;
    int a[n+1][n+1]={};
    for(int k=1;k<=n;k++)
    {
        for(int i=k;i<=n;i++)
            for(int j=k;j<=n;j++) a[i][j]=so;
        so--;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++) cout<<a[i][j]<<' ';
        cout<<endl;
    }
	return 0;
}
