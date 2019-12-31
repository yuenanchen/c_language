#include<stdio.h>
int max(int x,int y)
{
	int m;
	if(x>=y)
	{
		m=x;
	}
	else
	{
		m=y;
	}
	return m;
}

int main()
{
	int a,b,c;
	while(scanf("%d%d%d",&a,&b,&c)!=EOF)
	{
		int m,n;
		m=max(a,b);
		n=max(m,c);
		printf("%d\n",n);
	}
}
