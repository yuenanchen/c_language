#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,x,a;
	double item,sum,b;
	scanf("%d",&x);
	sum=1;
	for(i=1;i<=10000000;i++)
	   {
	   	 item=pow(x,i);
	   	 a=1;
	   	    for(j=1;j<=i;j++)
	   	       {
	   	       	    b=item/(a*j);
	   	       	    sum=sum+b;
				  
	         }
	if(b<0.00001)
	break;
	   }
	printf("s=%f",sum);
	return 0;
}
