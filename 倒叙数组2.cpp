#include<stdio.h> 
int main()
{
	int n,a[101],i;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	for (i=n-1;i>0;i--)
	{
		printf("%d ",a[i]);
	}
	printf("%d\n",a[0]);
	return 0;
 }


