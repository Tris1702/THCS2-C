#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int i=0;
    while (i<s.length())
    {
        if (s[i]==' ') s.erase(i,1);
        else i++;
    }
    cout<<s;
	return 0;
}
