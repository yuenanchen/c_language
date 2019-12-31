#include<stdio.h> 
int main()
{
	int a[6][6],i,j,n;
	while(scanf("%d",&n)!=EOF)
	{
		for (i=0;i<n;i++)
		{
			for (j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for (i=1;i<n;i++)
		{
			for (j=i-1;j>=0;j--)
			{
				if (a[i][j]!=0)
				{
					break;
				}
			}
			if (j!=-1)
			{
				break;
			} 
		}
		if (i==n)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0; 
}


