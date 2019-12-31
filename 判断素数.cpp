#include<stdio.h>
int main()
{
	int i,x;
	while(scanf("%d",&x)!=EOF)
	{
		for(i=2;i<=x/2;i++)
		
		{
			if(x%i==0)
			break;
		}
			if(i>x/2&&x!=1)
			printf("Yes\n");
			else
			printf("No\n");
			
		
	}
	return 0;
 } 
