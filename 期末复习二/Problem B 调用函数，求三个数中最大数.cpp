#include<stdio.h>

int max(int a,int b)
{
	int t;
	if(a>=b)
	t=a;
	else
	t=b;
	return t;
}

int main()
{
	int m,n,q,x;
	while(scanf("%d %d %d",&m,&n,&q)!=EOF)
	{
		x=max(m,n);
		x=max(x,q);
		printf("%d\n",x);
	}
}
