#include<stdio.h>
int main()
{
	int m,n,j,t,x;
	x=0;
	scanf("%d%d",&n,&m);
	for(j=1;j<n;j++)
	for(t=1;t<n;t++)
	if(j+t==n && 2*j+4*t==m)
	{
		printf("%d %d\n",j,t);x=1;
	}
	if(x==0)
	{
		printf("No\n"); 
	}
 } 
