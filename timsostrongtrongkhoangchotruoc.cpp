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
    int a,b;
    cin>>a>>b;
    bool ok=0;
    if (a>b) swap(a,b);
    FORT(i,a,b)
        if(kt(i))
        {
            ok=1;
            cout<<i<<' ';
        }
    if(ok==0) cout<<0;
	return 0;
}
