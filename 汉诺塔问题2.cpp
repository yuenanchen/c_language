#include<stdio.h>
#include<string.h>


void hannuota(int n,char one,char two,char three)
{
	if(n==1)
	{
		printf("%c->%c\n",one,three);
	}
	else
	{
		hannuota(n-1,one,three,two);
		printf("%c->%c\n",one,three);
		hannuota(n-1,two,one,three);
	}
}

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		hannuota(n,'a','b','c');
		
	}
	return 0;
}
