#include<stdio.h>

int main()
{
	int t,x,i;
	while(scanf("%d",&t)!=EOF)
	{
		int a,b,c,d;
		for(i=0;i<t;i++)
		{
			scanf("%d %d %d %d",&a,&b,&c,&d);
		
		for(x=0;;x++)
		{
		if(x%5==a&&x%6==b&&x%7==c&&x%11==d)
		{
			break;
		}
		
		}
		printf("%d\n",x);
	}
}
	return 0;
 } 
