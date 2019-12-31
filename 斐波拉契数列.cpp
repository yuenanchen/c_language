#include<stdio.h>
int main()
{
	int n,i;
	while(scanf("%d",&n)!=EOF)
	{int a[1000];
	 a[0]=1;
	 a[1]=1;
		for(i=2;i<1000;i++)
		{
			a[i]=a[i-1]+a[i-2];
			
		}
		for(i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}printf("\n");
	}
 } 
