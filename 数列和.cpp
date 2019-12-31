#include<stdio.h>

int main()
{
	int n,i,f3,f4;
	float sum=0;
	scanf("%d",&n);
	if(n>=3)
{
		for(i=1;i<=n;i++)
	{	int fenzi1=2,fenzi2=3,fenmu1=1,fenmu2=2;
		
		f3=fenzi1+fenzi2;
		fenzi1=fenzi2;
		fenzi2=f3;
		
		
		f4=fenmu1+fenmu2;
		fenmu1=fenmu2;
		fenmu2=f4;
		
		sum=sum+2+1.5+(f3*1.00)/f4;
	}
}
	else if(n==1)
	{
		sum=2;
	}
	else if(n==2)
	{
		sum==3.5;
	}
	printf("%.2f\n",sum);
	return 0;
	
 } 
