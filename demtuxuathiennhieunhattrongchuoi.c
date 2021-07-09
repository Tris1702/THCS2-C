#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define kc " "
typedef struct 
{
	char s[100];
	int ts;
} ch;
bool ss(char s1[],char s2[])
{
	if (strlen(s1)!=strlen(s2)) return 0;
	FORT(i,0,strlen(s1))
		if ((s1[i]==s2[i])||(s1[i]-('a'-'A')==s2[i])||(s1[i]+('a'-'A')==s2[i])) continue;
		else return 0;
	return 1;
}
int main()
{
	ch tanso[100];
	int n=0;
	char sou[100]={};
	gets(sou);
	char *stmp;
	stmp=strtok(sou,kc);
	while (stmp!=NULL)
	{
		bool ok=1;
		FORT(i,0,n) 
			if (ss(tanso[i].s,stmp)) 
			{
				tanso[i].ts++;
				ok=0;
				break;
			}
		if (ok)
		{
			n++;
			strcpy(tanso[n-1].s,stmp);
			tanso[n-1].ts=1;
		}
		stmp=strtok(NULL,kc);
	}
	int max=0;
	FORT(i,0,n)
		if (tanso[i].ts>tanso[max].ts) max=i;
	FORT(i,0,strlen(tanso[max].s))
		if (tanso[max].s[i]>='A'&&tanso[max].s[i]<='Z') tanso[max].s[i]+='a'-'A';
	printf("%s %d",tanso[max].s,tanso[max].ts);
	return 0;
}