#include<stdio.h>

int main()
{
	int m,n,x;
	scanf("%d%d",&m,&n);
	x=1500+5*m+5*n;
	if(x>=1800)
	printf("A");
	else if(x>=1700&&x<1799)
	printf("B");
	else if(x>=1600&&x<1699)
	printf("C");
	else if(x<1600)
	printf("D");
	return 0;
 } 
