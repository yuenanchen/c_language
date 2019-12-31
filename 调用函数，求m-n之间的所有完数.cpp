#include<stdio.h>

int factorsum(int x)
{
	int a=0,i;
	for(i=1;i<x;i++)
	{
		if(x%i==0)
		{
			a=a+i;
		}
	}
	return a;
 }
 
 int main()
 {
 	int m,n,i,x,count,a[10];
 	while(scanf("%d%d",&m,&n)!=EOF)
 	{	count=0;
 		for(i=m;i<=n;i++)
 		{
 			x=factorsum(i);
 			if(x==i)
 			{
				count++;
				if(count==1)
				{
					printf("%d",i);
				}
				else
				{
					printf(" %d",i);
				}
			}
			 
		 }
		 printf("\n");
	 }
	 
	 return 0;
  } 
