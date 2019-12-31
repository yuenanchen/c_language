#include<stdio.h>
int main()
{
	int n,m,i,j,t=1,count;
	int a[20][20];
	while(scanf("%d%d",&n,&m)!=EOF)
	{  
		for(i=0;i<n;i++)
		{
			if(i%2==0||i==0)
			{	
				for(j=0;j<m;j++)
				{
					
					a[i][j]=t;
					printf("%2d",a[i][j]);
					t=t+1;
					while(j==(m-1))
					{
						printf("\n");
						break;
					}
				}
			}
			else
			{
				for(j=m-1;j>=0;j--)
				{
					a[i][j]=t;
					printf("%2d",a[i][j]);
					t=t+1;
					while(j==0)
					{
						printf("\n");
						break;
					}
				}
			}
		}
	}
	return 0;
}
