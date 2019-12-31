#include<stdio.h>
void input(int a[], int n);
void output(int a[],int n);
void input(int a[], int n)
{
	int *p;
	for(p=a;p<a+n;p++)
	{
		scanf("%d",p);
	}
	
}

void output(int a[],int n)
{
	int *p;
	for(p=a;p<a+n-1;p++)
	{
		printf("%d ",*p);
		
	}printf("%d\n",*p);
}

int main()
{
	int b[100],n;
	while(scanf("%d",&n)!=EOF)
	{
		input(b,n);
		output(b,n);
	}
	return 0;
	
}
