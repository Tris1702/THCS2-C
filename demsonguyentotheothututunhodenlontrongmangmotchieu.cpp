#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)

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
    int a[n+1]={};
    FORT(i,1,n) cin>>a[i];
    sort(a+1,a+n+1);
    int i=1;
    while (i<=n)
    {
        int tmp=i;
        while (i<n&&a[i+1]==a[i]) i++;
        if (nt(a[i]))
            cout<<a[i]<<' '<<i-tmp+1<<endl;
        i++;
    }
	return 0;
}
