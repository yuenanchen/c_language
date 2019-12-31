#include<stdio.h>
int jiecheng(int x)
{
	int m=1,i;
	for(i=1;i<=x;i++)
	{
		m=m*i;
	}
	return m;
}

int main()
{
	int i;
	float sum=0;
	for(i=1;i<=10;i++)
	{
		sum=sum+jiecheng(i);
	}
	printf("%f",sum);
}
