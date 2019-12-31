#include<stdio.h>

int main() 
{
	int i=1,n,x,min,max;
	scanf("%d",&n);
	scanf("%d",&x);
	max=x;
	min=x;
	for(i=1;i<n;i++)
	{
		scanf("%d",&x);
		if(x<=min)
		{
			min=x;
		}
		if(x>=max)
		{
			max=x;
		}
	}
	printf("max=%d, min=%d",max,min);
	
}
