#include<stdio.h>
int t(int n)
{
	int i;
	if(n==1||n==0)
		return 0;
	for(i=2;i*i<=n;i++) 
	{
		if(n%i==0)
			return 0;
	}
	return i;
}
int main()
{
	int i,n,count;
	for(i=100;i<=200;i++)
	{
		if(t(n))
		{
			printf("%5d",i);
			count++;
			if(count%5==0)
				printf("\n");
		}
		printf("\n");
	}
	return 0;
}
