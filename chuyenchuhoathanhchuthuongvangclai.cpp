#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if (s[i]>='a'&&s[i]<='z') s[i]-='a'-'A';
        else
            if (s[i]>='A'&&s[i]<='Z') s[i]+='a'-'A';
    }
    cout<<s;
	return 0;
}
