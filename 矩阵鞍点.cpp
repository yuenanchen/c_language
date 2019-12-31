#include<stdio.h>

int main()
{
	int x,i,j,a[10][10],flag=0,temp,t;
	while(scanf("%d",&x)!=EOF)
	{
		for(i=0;i<x;i++)
		{
			for(j=0;j<x;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<x;i++)
		{
			temp=a[i][0];
			t=0;
			for(j=0;j<x;j++)
			{
				if(temp<a[i][j])
				{
					temp=a[i][j];
					t=j; 
				}
			}
			for(j=0;j<x;j++)
			{
				if(a[j][t]<temp)
				flag++;
			}
			if(flag==0)
			{
				printf("%d %d\n",i,t);
				break;
			}
			flag=0;
		}
		if(i==x)
		{
			printf("NO\n");
		}
	}
	return 0;
 } 
