#include<stdio.h>

int main()
{
	int t,n,i,a[1000],sum=0,j;
	while(scanf("%d",&t)!=EOF)
	{
		for(j=0;j<t;j++)
		{
			scanf("%d",&n);
			for(i=0;i<n;i++)
			{
				scanf("%d",&a[i]);
			}
			for(i=0;i<n;i++)
			{
				sum=sum+a[i];
			}
			printf("%d\n",sum);
			sum=0;
		}
	}
	return 0;
}
