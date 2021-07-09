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
    int m=1,mm=n-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=mm;j++) printf("~");
        for(int j=1;j<=m;j++) printf("*");
        m+=2;
        mm--;
        printf("\n");
    }
    m-=2;
    mm++;
    for(int i=2;i<=n;i++)
    {
        m-=2;
        mm++;
        for(int j=1;j<=mm;j++) printf("~");
        for(int j=1;j<=m;j++) printf("*");
        printf("\n");
    }
	return 0;
}
