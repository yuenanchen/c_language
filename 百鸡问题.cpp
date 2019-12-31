#include<stdio.h>
int main()
{
	int g,m,x;

	for(g=0;g<=100;g++)	
	{for(m=0;m<=100;m++)
	 for(x=0;x<=100;x++)
	if(g+m+x==100&&5*g+3*m+x/3==100&&x%3==0)
	printf("%-2d%2d %2d\n",g,m,x);}
}
