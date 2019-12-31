#include<stdio.h>
#include<math.h> 
int main()
{
	int i,n,a[1000],x,y;
	n<=10;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		x=0;
		y=a[0];
		for(i=1;i<n;i++)
		{
			if(a[i]>y)
			{
				y=a[i];
				x=i;		
			}
		}
	printf("%d %d\n",y,x);
	}
	return 0;	
}

