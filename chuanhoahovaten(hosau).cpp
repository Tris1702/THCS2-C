#include<iostream>
#include<string>
#include<vector>
#include<math.h>

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
    string s;
    getline(cin,s);
    xoadc(s);
    int i=0;
    while (s[i]!=' ') i++;
    int vt=i;
    for(i=vt+1;i<s.length();i++)
    {
        if (s[i-1]==' '&&s[i]>='a'&&s[i]<='z') s[i]-='a'-'A';
        if (s[i-1]!=' '&&s[i]>='A'&&s[i]<='Z') s[i]+='a'-'A';
        cout<<s[i];
    }
    cout<<", ";
    for(i=0;i<vt;i++)
    {
        if (s[i]>='a'&&s[i]<='z') s[i]-='a'-'A';
        cout<<s[i];
    }
	return 0;
}
