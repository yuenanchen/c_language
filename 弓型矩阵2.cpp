#include<stdio.h>
#include<string.h>
int main()
{
int n,m,a[20][20];
while(scanf("%d%d",&n,&m)!=EOF)
{    int t,i,j;
    t=a[i=0][j=0]=1;
    while(t<n*m)
    {
        while(j+1<m)
          a[i][++j]=++t;  
          a[++i][j]=++t;
        while(j-1>=0)
          a[i][--j]=++t;
          a[++i][j]=++t;
    }
     
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m-1;j++)
        {
            printf("%2d ",a[i][j]);
        }
        printf("%2d\n",a[i][m-1]);
    }
}
return 0;
}

