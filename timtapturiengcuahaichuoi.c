#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define kc " "
int main()
{
	char s1[100]={},s2[100]={},taps1[100][100]={},taps2[100][100];
	int n=0,m=0;
	char *stmp;
	gets(s1);
	gets(s2);
	stmp=strtok(s1,kc);
	while (stmp!=NULL)
	{
		bool ok=1;
		FORT(i,0,n)
			if (strcmp(taps1[i],stmp)==0) ok=0;
		if (ok) 
		{
			strcpy(taps1[n],stmp);
			n++;
		}
		stmp=strtok(NULL,kc);
	}
	stmp=strtok(s2,kc);
	while (stmp!=NULL)
	{
		bool ok=1;
		FORT(i,0,m)
			if (strcmp(taps2[i],stmp)==0) ok=0;
		if (ok) 
		{
			strcpy(taps2[m],stmp);
			m++;
		}
		stmp=strtok(NULL,kc);
	}
	FORT(i,0,n)
		FORT(j,i+1,n)
			if (strcmp(taps1[i],taps1[j])>0)
			{
				char tmp[100];
				strcpy(tmp,taps1[i]);
				strcpy(taps1[i],taps1[j]);
				strcpy(taps1[j],tmp);
			}
	FORT(i,0,n)
	{
		bool ok=1;
		FORT(j,0,m)
			if (strcmp(taps1[i],taps2[j])==0) ok=0;
		if (ok) printf("%s ",taps1[i]);
	}
	return 0;
}