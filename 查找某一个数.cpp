#include<stdio.h>

int main()
{
	int i,x,n,b,a[100],c=1;
	
	while(scanf("%d",&x)!=EOF)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			if(x==a[i])
			{
			b=i;
			printf("%d\n",b);
			c=0;
			break;
			}
		}
		if(c==1)
		{
			printf("Not Found\n");
		}
		else
		{}
		
	}
 } 
