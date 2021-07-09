#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int i=0,maxx=0,minn=1e9,luu1,luu2;
    while (i<s.length())
    {
        while (i<s.length()&&s[i]==' ') i++;
        int tmp=i;
        while (i<s.length()&&s[i]!=' ') i++;
        if (i-tmp>maxx)
        {
            maxx=i-tmp;
            luu1=tmp;
        }
        if (i-tmp<minn)
        {
            minn=i-tmp;
            luu2=tmp;
        }
    }
    for(int i=luu1;i<luu1+maxx;i++) cout<<s[i];
    cout<<' ';
    for(int i=luu2;i<luu2+minn;i++) cout<<s[i];
	return 0;
}
