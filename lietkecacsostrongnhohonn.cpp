#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
int luu[10]={};
void prepare()
{
    int tmp=1;
    luu[0]=1;
    FORT(i,1,9)
    {
        tmp*=i;
        luu[i]=tmp;
    }
}
bool kt(int a)
{
    if (a==0) return 0;
    int stmp=0,luua=a;
    while (a>0)
    {
        stmp+=luu[a%10];
        a/=10;
    }
    return (luua==stmp);
}
int main()
{
    prepare();
    int n;
    cin>>n;
    FORT(i,1,n)
        if (kt(i)) cout<<i<<' ';
	return 0;
}
