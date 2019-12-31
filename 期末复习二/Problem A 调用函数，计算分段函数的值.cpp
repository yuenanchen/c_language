#include<stdio.h>

int sign(int a)
{
	if(a>0)
	return 1;
	else if(a==0)
	return 0;
	else
	return -1;
 } 
 
 int main()
 {
 	int n,b;
 	while(scanf("%d",&n)!=EOF)
 	{
 		b=sign(n);
 		printf("%d\n",b);
	 }
	 return 0;
 }
