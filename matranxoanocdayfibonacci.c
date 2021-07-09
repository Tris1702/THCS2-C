#include<stdio.h>
int gt[1005]={};
void prepare()
{
    gt[1]=0;
    int f1=0,f2=1;
    for(int i=2;i<=1000;i++)
    {
        gt[i]=f2;
        int tmp=f1+f2;
        f1=f2;
        f2=tmp;
    }
}
int main()
{
    prepare();
    int n,matrix[105][105]={},x=1,y=1;
    scanf("%d",&n);
    for(int i=0;i<=n;i++) matrix[i][0]=matrix[i][n+1]=-1;
    for(int j=0;j<=n;j++) matrix[0][j]=matrix[n+1][j]=-1;
    matrix[1][1]=1;
    for(int i=2;i<=n*n;i++)
    {
        if (y+1<=n&&matrix[x][y+1]==0&&matrix[x-1][y]!=0&&matrix[x][y-1]!=0) y++;
        else
        {
            if (x+1<=n&&matrix[x+1][y]==0&&matrix[x][y+1]!=0&&matrix[x-1][y]!=0) x++;
            else
            {
                if (y-1>=1&&matrix[x][y-1]==0&&matrix[x][y+1]!=0&&matrix[x+1][y-1]!=0) y--;
                else x--;
            }
        }
        matrix[x][y]=gt[i];
    }
    matrix[1][1]=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++) printf("%d ",matrix[i][j]);
        printf("\n");
    }
    return 0;
}
