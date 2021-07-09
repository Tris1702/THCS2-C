#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
vector<string> x1,x2,res;
string s;

bool trung(int vt)
{
    FORT(i,0,(int)res.size()-1)
        if (res[i]==x1[vt]) return 1;
    return 0;
}
int main()
{
    string nguon;
    getline(cin,nguon);
    while (nguon[nguon.length()-1]==' ') nguon.erase(nguon.length()-1,1);
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
        x1.push_back(s);
    }
    nguon="";
    getline(cin,nguon);
    while (nguon[nguon.length()-1]==' ') nguon.erase(nguon.length()-1,1);
    vt=0;
    while (vt<nguon.length())
    {
        while (vt<nguon.length()&&nguon[vt]==' ') vt++;
        s="";
        while (vt<nguon.length()&&nguon[vt]!=' ')
        {
            s+=nguon[vt];
            vt++;
        }
        x2.push_back(s);
    }
    FORT(i,0,(int)x1.size()-1)
    {
        bool ok=1;
        FORT(j,0,(int)x2.size()-1)
            if (x1[i]==x2[j]) ok=0;
        if (ok)
        {
            if (trung(i)==0)
               res.push_back(x1[i]);
        }
    }
    sort(res.begin(),res.end());
    for(int i=0;i<res.size();i++) cout<<res[i]<<' ';
	return 0;
}
