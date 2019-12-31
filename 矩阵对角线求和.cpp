#include<stdio.h>
int main()
{
	int i,j,n,c=0,d=0;
	int a[10][10];
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
		}
		for(i=0;i<n;i++)
		{
			c=c+a[i][i];
		}
		for(i=n-1;i>=0;i--)
		{
			d=d+a[i][n-1-i];
		}
		printf("%d %d\n",c,d);
	}
}
