#include<stdio.h>
int sign(int n)
{
	int m;
	if(n>0)
	{
		m=1;
	}
	else if(n==0)
	{
		m=0;
	}
	else
	{
		m=-1;
	}
	return m;
 }
 
 int main()
 {
 	int x,y;
 	while(scanf("%d",&x)!=EOF)
 	{
 		y=sign(x);
 		printf("%d\n",y);
	 }
  } 
