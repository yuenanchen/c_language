#include<stdio.h>

int main()
{
	int x,i,j,n,k,m;
	scanf("%d",&x);
	for(m=1;m<=x;m++)
	{
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<=n-i-1;j++)
			{
				printf(" ");
				for(k=0;k<2*i+n;k++)
				{
				printf("*");
				}
				printf("\n");
			}
			for(i=n-2;i>=0;i--)
			{
				for(j=0;j<n-1;j++)
				 printf(" ");
				 for(j=0;j<2*i+n;j++)
				 {
				 printf("*");
				}
				 printf("\n");
			}
			break;
		}
		
	}
	}
 } 
