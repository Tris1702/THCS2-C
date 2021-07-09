#include<iostream>

using namespace std;
int main()
{
    string s;
    int demso=0,demchu=0,demkt=0;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if (s[i]>='0'&&s[i]<='9') demso++;
        else
        {
            if ((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')) demchu++;
            else demkt++;
        }
    }
    cout<<demso<<' '<<demchu<<' '<<demkt;
    return 0;
}
