#include<stdio.h>


int age(int n,int m,int k)
{
	int x;
	if(n==1)
	{
		x=k;
	}
	else
	{
		x=age(n-1,m,k)+m;
	}
	return x;
}

int main()
{
	int n,m,k,a;
	while(scanf("%d%d%d",&n,&m,&k)!=EOF)
	{
		a=age(n,m,k);
		printf("%d\n",a);
	}
}
