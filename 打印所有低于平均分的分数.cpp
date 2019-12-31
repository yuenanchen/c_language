#include<stdio.h>
int main()
{
	int i,x,a[100];
	float sum=0;
	while(scanf("%d",&x)!=EOF)
	{sum=0;
	for(i=0;i<x;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	for(i=0;i<x;i++)
	{
		if(a[i]<(sum/x))
		{
			printf("%d",a[i]);
			
			printf(" ");
		}
		
	}
	for(i=0;i<x;i++)
	{
	if(a[i]=(sum/x))
		{
			printf("\n");
			break;
		}
}
}printf("\n");
}
