#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
void xoadc(string &s)
{
    while (s[0]==' ') s.erase(0,1);
    while (s[s.length()-1]==' ') s.erase(s.length()-1,1);
    int i=0;
    while (i<s.length())
    {
        while (i<s.length()&&s[i]==' '&&s[i+1]==' ') s.erase(i,1);
        i++;
        while (i<s.length()&&s[i]!=' ') i++;
    }
}
int main()
{
    string s,tmp="";
    getline(cin,s);
    xoadc(s);
    int i=s.length()-1;
    while (s[i]!=' ') i--;
    int vt=i;
    i=0;
    while (i<vt)
    {
        while (i<vt&&s[i]==' ') i++;
        if(s[i]>='A'&&s[i]<='Z') s[i]+='a'-'A';
        tmp+=s[i];
        while (i<vt&&s[i]!=' ') i++;
    }
    for(i=vt+1;i<s.length();i++)
    {
        if (s[i]>='A'&&s[i]<='Z') s[i]+='a'-'A';
        tmp+=s[i];
    }
    tmp+="@ptit.edu.vn";
    cout<<tmp;
	return 0;
}
