#include<stdio.h>
int main()
{
	int i,x,sum=1;
	while(scanf("%d",&x)!=EOF)
	{
		for(i=1;i<x;i++)
		{
			sum=sum+1;
			sum=sum*2;
		}
	
	    printf("%d\n",sum);
	    sum=1;
	}
	return 0;
}
