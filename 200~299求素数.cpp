#include<stdio.h>
int main()
{
	int i,n,flag,count=0;
	for(n=200;n<=299;n++)
	{	flag=0;
		for(i=2;i<n;i++)
		
			if(n%i==0)
			{
				flag=1;
				break;
			}
			if(flag==0)
			{
			if(count%8==0)
				printf("%d",n);
				else
				printf(" %d",n);
				count++;
				if(count==8)
				
					printf("\n");
				
			
		}
	}
	printf("\n");
	return 0;
 } 
