#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
vector<string> x;
string s;
bool cmp(string a,string b)
{
    if (a.length()!=b.length()) return 0;
    for(int i=0;i<a.length();i++)
        if (a[i]==b[i]||a[i]-('a'-'A')==b[i]||a[i]+('a'-'A')==b[i]) continue;
            else return 0;
    return 1;
}
bool kt()
{
    FORT(i,0,(int)x.size()-1)
        if (cmp(x[i],s)) return 0;
    return 1;
}
int main()
{
    string nguon;
    getline(cin,nguon);
    int vt=0;
    while (vt<nguon.length())
    {
        while (vt<nguon.length()&&nguon[vt]==' ') vt++;
        s="";
        while (vt<nguon.length()&&nguon[vt]!=' ')
        {
            s+=nguon[vt];
            vt++;
        }
        if (kt())
            x.push_back(s);
    }
    FORT(i,0,(int)x.size()-1)
        cout<<x[i]<<' ';
	return 0;
}
