#include<stdio.h>
int main()
{
	int n,m,i,j,t,count;
	int a[20][20];
	while(scanf("%d%d",&n,&m)!=EOF)
	{     t=1;
		for(i=0;i<n;i++)
		{	count=0;
			for(j=0;j<m;j++)
			{
			count=count+1;
			if(count==m)
			{
				printf("%d",t);
			}
			else
			{
			printf("%d ",t);
			}
			t=t+1;
			while((t-1)%m==0)
			{
				printf("\n");
				break;
			}
			}
		}
	}
 } 
