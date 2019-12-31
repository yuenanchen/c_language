#include<stdio.h>
int main()
{	
	int x,i,j,k;
	while(scanf("%d",&x)!=EOF && 1<=x<=9)
	{
		for(i=1;i<=x;i++)
		{
			for(k=0;k<x-k;k++)
			{
				printf(" ");
			}
			for(j=0;j<2*i-1;j++)
			{
				printf("*");
				printf("\n");
			}
		}
	}
	return 0;
}
