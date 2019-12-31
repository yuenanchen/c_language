#include<stdio.h>
#include<string.h>

int countdigit(int m)
{
	int count=0,n;
	while(m!=0)
	{
	n=m%10;
	m=m/10;
	if(n==2)
	{
		count++;
	}
	}
	return count;
}

int main()
{
	int a,x;
	while(scanf("%d",&a)!=EOF)
	{
		x=countdigit(a);
		printf("%d\n",x);
		
	}
}
