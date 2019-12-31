#include<stdio.h>
#include<math.h>
double fact(int b)
 {
 	int i,result=1;
 	for(i=1;i<=b;i++)
 	
 		result=result*i;
 		
	 
	 return result;
  } 
int main()
{
	int x,i,sum=0;
	while(scanf("%d",&x)!=EOF)
	{
		for(i=1;i>0;i++)
		{
			if(abs(pow(x,i)/fact(i))<0.00001)
			{break;} 
			sum=sum+(pow(x,i))/(fact(i));
			
		}
		printf("%.3d\n",sum);
	}
 }
 

