#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)

struct SV 
{
    int masv;
    char ten[100];
    float da,db,dc;
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
        ma=neww.masv;
    }
    int sl;
    scanf("%d",&sl);
    FORT(i,0,sl)
    {
        ma++;
        neww.masv=ma;
        gets(neww.ten);
        gets(neww.ten);
        scanf("%f%f%f",&neww.da,&neww.db,&neww.dc);
        fwrite(&neww,ssv,1,f);
    }
    fclose(f);
    printf("%d",sl);
}
void capnhat()
{
    struct SV neww1,neww2;
    scanf("%d",&neww1.masv);
    gets(neww1.ten);
    gets(neww1.ten);
    scanf("%f%f%f",&neww1.da,&neww1.db,&neww1.dc);
    f=fopen("B19DCCN263.bin","rb+");
    while (fread(&neww2,ssv,1,f))
    {
        if (neww2.masv==neww1.masv)
        {
            fseek(f,-ssv,SEEK_CUR);
            fwrite(&neww1,ssv,1,f);
            break;
        }
    }
    fclose(f);
    printf("%d",neww1.masv);
}
void in()
{
    struct SV neww,a[100]={};
    int n=-1;
    f=fopen("B19DCCN263.bin","rb");
    while (fread(&neww,ssv,1,f))
    {
        n++;
        a[n]=neww;
    }
    FORT(i,0,n+1)
        FORT(j,i+1,n+1)
        {
            float tmp1=a[i].da+a[i].db+a[i].dc,tmp2=a[j].da+a[j].db+a[j].dc;
            if (tmp1>tmp2)
            {
                struct SV tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    FORT(i,0,n+1)
        printf("%d %s %.1f %.1f %.1f\n",a[i].masv,a[i].ten,a[i].da,a[i].db,a[i].dc);
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