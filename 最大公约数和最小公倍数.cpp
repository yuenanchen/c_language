#include<stdio.h>
int main()
{
	int x,y,i,a=0,b,m,n;
	while(scanf("%d%d",&x,&y)!=EOF)
	{
	m=x;n=y;
	while(y!=0)
	{  
		
			a=y;
			y=x%y;
			x=a;
			
	}

	b=(m*n)/a;
	printf("%d %d\n",a,b);
}
 } 
