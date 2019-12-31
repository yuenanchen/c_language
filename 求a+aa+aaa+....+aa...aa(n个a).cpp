#include<stdio.h>

int fn(int a,int n)
{
	int x=0,i,m=1;
	for(i=1;i<=n;i++)
	{
		
		x=x+a*m;
		m=m*10;
	}
	return x;
}
int main()
{
	int x,y,sum,i;
	while(scanf("%d%d",&x,&y)!=EOF)
	{
		sum=0;
		for(i=1;i<=y;i++)
		{
			sum=sum+fn(x,i);
		}
		printf("%d\n",sum);
	}
}
