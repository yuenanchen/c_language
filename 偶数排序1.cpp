#include<stdio.h> 
int main()
{
	int a[100],b[100],n,i,j;
	while (scanf("%d",&n)!=EOF)
	{
		int t=0,c;	
		for (i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for (i=0;i<n;i++)
		{
			if (a[i]%2==0)
			{
				b[t]=a[i];
				t++;	
			} 
		}
		for (i=0;i<t;i++)
		{
			for (j=i+1;j<t;j++)
			{
				if (b[j]>b[i])
				{
					c=b[j];
					b[j]=b[i];
					b[i]=c;
				}
			}
		} 
		for (i=0;i<t-1;i++)
		{
			printf("%d ",b[i]);
		}
		printf("%d\n",b[t-1]);
	} 
	return 0;
}

