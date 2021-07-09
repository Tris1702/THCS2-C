#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    string s;
    int dem=0;
    getline(cin,s);
    int i=0;
    while (i<s.length())
    {
        bool ok=0;
        while (i<s.length()&&s[i]==' ') i++;
        while (i<s.length()&&s[i]!=' ')
        {
            i++;
            ok=1;
        }
        if (ok) dem++;
    }
    cout<<dem;
	return 0;
}
