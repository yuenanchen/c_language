/*
#include <stdio.h>

int f(int n)
{
	if(n == 1)
	{
		return 1;
	}
	else if(n == 2)
	{
		return 2;
	}
	else if(n == 3)
	{
		return 4;
	}
	return f(n-1)+f(n-2)+f(n-3);
}

int main(void)
{	int t,i,x;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&x);
		printf("%d\n",f(x));
	}
	return 0;
}*/


#include<stdio.h>
void sort(int a)
{
int f[1000],i;
f[1]=1;
f[2]=2;
f[3]=4;
for(i=4;i<=a;i++){
f[i]=f[i-1]+f[i-2]+f[i-3];
}
printf("%d",f[a]);
}
int main()
{

int n,m,i;
while(scanf("%d",&n)!=EOF)
{
for(i=0;i<n;i++){
scanf("%d",&m);
sort(m);
printf("\n"); 
}
}
return 0;
}
