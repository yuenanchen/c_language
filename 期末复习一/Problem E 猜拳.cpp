#include<stdio.h>

int main()
{
	int t,x;
	while(scanf("%d %d",&t,&x)!=EOF)
	{
		if((t==1&&x==2)||(t==2&&x==3)||(t==3&&x==1))
		{
			printf("win\n");
		}
		else if(t==x)
		{
			printf("tie\n");
		}
		else
		{
			printf("lose\n");
		}
	}
	return 0;
 } 
