#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
vector<string> x;
vector<int> res;
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
void tang()
{
    FORT(i,0,(int)x.size()-1)
        if (cmp(x[i],s))
        {
            res[i]++;
            break;
        }
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
        {
            x.push_back(s);
            res.push_back(0);
        }
        tang();
    }
    int luu=0;
    FORT(i,0,(int)res.size()-1)
        if (res[luu]<res[i]) luu=i;
    FORT(j,0,(int)x[luu].length()-1)
            if (x[luu][j]>='A'&&x[luu][j]<='Z') x[luu][j]+='a'-'A';
    cout<<x[luu]<<' '<<res[luu];
	return 0;
}
