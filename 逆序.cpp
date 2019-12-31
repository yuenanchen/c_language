#include<stdio.h>

int main()
{
	int m,n,count;
	scanf("%d",&n);
	count=0;
	m=n;
	while(m!=0)
	{
		m=m/10;
		count++;
	}
	
	printf("%d\n",count);
	
	int a,b,c,d,e;
	
	a=n%10;
	b=(n%100)/10;
	c=(n%1000)/100;
	d=(n%10000)/1000;
	e=n/10000;
	
	if(count==5)
	{
		printf("%d%d%d%d%d\n",a,b,c,d,e);
	}
	else if(count==4)
	{
		printf("%d%d%d%d\n",a,b,c,d);
	}
	else if(count==3)
	{
		printf("%d%d%d\n",a,b,c);
	}
	else if(count==2)
	{
		printf("%d%d\n",a,b);
	}
	else
	
	{
		printf("%d\n",a);
	}

	return 0;
 } 
