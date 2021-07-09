#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)

struct SP
{
    int masp;
    char tens[1000],tentg[1000];
    float nhap;
};
FILE *f;
int const ssp=sizeof(struct SP);
void them()
{
    struct SP neww;
    int ma=0;
    f=fopen("B19DCCN263.bin","ab+");
    if (fread(&neww,ssp,1,f))
    {
        fseek(f,-ssp,SEEK_END);
        fread(&neww,ssp,1,f);
        ma=neww.masp;
    }
    int sl;
    scanf("%d",&sl);
    FORT(i,0,sl)
    {
        ma++;
        neww.masp=ma;
        gets(neww.tens);
        gets(neww.tens);
        gets(neww.tentg);
        scanf("%f",&neww.nhap);
        fwrite(&neww,ssp,1,f);
    }
    fclose(f);
    printf("%d",sl);
}
void capnhat()
{
    struct SP neww1,neww2;
    scanf("%d",&neww1.masp);
    gets(neww1.tens);
    gets(neww1.tens);
    gets(neww1.tentg);
    scanf("%f",&neww1.nhap);
    f=fopen("B19DCCN263.bin","rb+");
    while (fread(&neww2,ssp,1,f))
    {
        if (neww2.masp==neww1.masp)
        {
            fseek(f,-ssp,SEEK_CUR);
            fwrite(&neww1,ssp,1,f);
            break;
        }
    }
    fclose(f);
    printf("%s",neww1.tens);
}
void in()
{
    struct SP neww,a[100]={};
    int n=-1;
    f=fopen("B19DCCN263.bin","rb");
    while (fread(&neww,ssp,1,f))
    {
        n++;
        a[n]=neww;
    }
    FORT(i,0,n+1)
        FORT(j,i+1,n+1)
            if (a[i].nhap>a[j].nhap)
            {
                struct SP tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
    FORT(i,0,n+1)
            printf("%d %s %.2f %s\n",a[i].masp,a[i].tens,a[i].nhap,a[i].tentg);
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