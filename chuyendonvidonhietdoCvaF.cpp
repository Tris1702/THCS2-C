#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
    int c;
    cin>>c;
    double f=((double)c*9/5)+32;
    cout<<setprecision(2)<<fixed<<f;
	return 0;
}
