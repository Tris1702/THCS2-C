#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n,k=1;
    cin>>n;
    int a[n+1]={};
    for(int i=1;i<=n;i++) a[i]=i;
    for(int i=1;i<=n;i++)
    {
        for(int j=k;j>1;j--) cout<<a[j]<<' ';
        for(int j=1;j<=n-k+1;j++) cout<<a[j]<<' ';
        k++;
        cout<<endl;
    }
	return 0;
}
