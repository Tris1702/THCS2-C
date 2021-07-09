#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)

struct SP
{
    int masp,loai,tien;
    char ten[1000];
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
    int sl,thu=0,chi=0;
    scanf("%d",&sl);
    FORT(i,0,sl)
    {
        ma++;
        neww.masp=ma;
        scanf("%d",&neww.loai);
        gets(neww.ten);
        gets(neww.ten);
        scanf("%d",&neww.tien);
        fwrite(&neww,ssp,1,f);
        if (neww.loai==1) thu++;
        else chi++;
    }
    fclose(f);
    printf("%d %d",thu,chi);
}
void capnhat()
{
    struct SP neww1,neww2;
    scanf("%d",&neww1.masp);
    gets(neww1.ten);
    gets(neww1.ten);
    scanf("%d",&neww1.tien);
    f=fopen("B19DCCN263.bin","rb+");
    while (fread(&neww2,ssp,1,f))
    {
        if (neww2.masp==neww1.masp)
        {
            neww1.loai=2;
            fseek(f,-ssp,SEEK_CUR);
            fwrite(&neww1,ssp,1,f);
            break;
        }
    }
    fclose(f);
    printf("%s",neww1.ten);
}
void in()
{
    struct SP neww;
    f=fopen("B19DCCN263.bin","rb");
    int sumt=0,sumc=0;
    while (fread(&neww,ssp,1,f))
    {
        if (neww.loai==1) sumt+=neww.tien;
        else sumc+=neww.tien;
    }
    printf("%d %d %d\n",sumt,sumc,sumt-sumc);
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