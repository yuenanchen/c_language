#include<stdio.h>
int main()
{
	int n,i,j,p=1;
	int a[6][6];
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
		}
			if(n==1)
	{
		printf("NO\n");
	}
	else
	{
		for(i=1;i<n;i++)
		{
			for(j=0;j<i;j++)
			if(a[i][j]!=0)
			{
				p=0;
				p=p*1;
			}
		}
		if(p==1)
            printf("YES\n");
        if(p==0)
            printf("NO\n");
        }
	
	}
	return 0;
 } 
