#include<stdio.h>
int main()
{
	int i,n,a[1000],max,y=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			y=i;
		}
		
	}
	printf("%d %d\n",max,y);
 } 
