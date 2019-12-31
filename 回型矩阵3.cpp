#include<stdio.h>
int main()
{
	int i,j,n,m,t;
	int a[10][10];
	while(scanf("%d%d",&n,&m)!=EOF)
	{	t=a[i=0][j=0]=1;
		while(t<n*m)
		{
			while(j+1<m)
			{
				a[i][++j]=++t;
			}
			while(i+1<n)
			{
				a[++i][j]=++t;
			}
			while(j-1>=0)
			{
				a[i][--j]=++t;
			}
			while(i<n)
			
		}
	}
 } 
