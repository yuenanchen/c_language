#include<stdio.h>

int sushu(int m)
{
	int i,n;
	for(i=2;i<=m/2;i++)
      
		if(m%i==0)
		break;
		
		if(i>m/2 && m!=1)
		n=m;
		else
		{n=0;}
	
	
	return n;
}

int main()
{
	int a[100],b[100],m=100,i,n,t=0,count=0;
	
	for(i=0;i<100;i++)
	{
		a[i]=m;
		m++;
	}
	for(i=0;i<100;i++)
	{
		n=sushu(a[i]);
		if(n==0)
		{}
		else		
		{
		b[t]=n;
		t++;
		}
	}
	for(i=0;i<21;i++)
	{
		
		printf("%5d",b[i]);
		count++;
		if(count%5==0)
		{
			printf("\n");
		}
	}
}
