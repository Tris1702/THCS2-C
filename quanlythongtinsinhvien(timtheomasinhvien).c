#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)

struct SV
{
    int ma;
    char masv[100],ten[100];
};
FILE *f;
int const ssv=sizeof(struct SV);
void them()
{
    struct SV neww;
    int ma=0;
    f=fopen("B19DCCN263.bin","ab+");
    if (fread(&neww,ssv,1,f))
    {
        fseek(f,-ssv,SEEK_END);
        fread(&neww,ssv,1,f);
        ma=neww.ma;
    }
    int sl;
    scanf("%d",&sl);
    gets(neww.masv);
    FORT(i,0,sl)
    {
        ma++;
        neww.ma=ma;
        gets(neww.masv);
        gets(neww.ten);
        fwrite(&neww,ssv,1,f);
    }
    fclose(f);
    printf("%d",sl);
}
void capnhat()
{
    struct SV neww1,neww2;
    char neww[100];
    gets(neww);
    gets(neww);
    gets(neww1.masv);
    gets(neww1.ten);
    f=fopen("B19DCCN263.bin","rb+");
    while (fread(&neww2,ssv,1,f))
    {
        if (strcmp(neww2.masv,neww)==0)
        {
            fseek(f,-ssv,SEEK_CUR);
            neww1.ma=neww2.ma;
            fwrite(&neww1,ssv,1,f);
            break;
        }
    }
    fclose(f);
    printf("%s",neww1.masv);
}
void in()
{
    struct SV neww;
    char pre[100]={};
    gets(pre);
    gets(pre);
    f=fopen("B19DCCN263.bin","rb");
    while (fread(&neww,ssv,1,f))
    {
        bool ok=1;
        FORT(i,0,strlen(pre))
            if (neww.masv[i]!=pre[i]) ok=0; 
        if (ok) printf("%d %s %s\n",neww.ma,neww.ten,neww.masv);
    }
    fclose(f);
}
int main()
{
    int cn;
    scanf("%d",&cn);
    switch(cn)
    {
        case 1: them();
        break;
        case 2: capnhat();
        break;
        case 3: in();
        break;
    }
    return 0;
}