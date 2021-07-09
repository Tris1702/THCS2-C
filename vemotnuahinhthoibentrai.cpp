#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int mm=n-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=mm;j++) printf("~");
        for(int j=1;j<=n-mm;j++) printf("*");
        mm--;
        printf("\n");
    }
    mm++;
    for(int i=2;i<=n;i++)
    {
        mm++;
        for(int j=1;j<=mm;j++) printf("~");
        for(int j=1;j<=n-mm;j++) printf("*");
        printf("\n");
    }
	return 0;
}
