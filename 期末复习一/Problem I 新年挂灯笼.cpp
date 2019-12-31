#include <stdio.h>

void pr(int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			printf(" ");
		}
		for(j=0;j<2*i+n;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

void prf(int n)
{
	int i,j;
	for(i=n-2;i>=0;i--)
	{
		for(j=0;j<n-i-1;j++)
		{
			printf(" ");
		}
		for(j=0;j<2*i+n;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

int main(void)
{
	int t,i;
	while(scanf("%d",&t) != EOF)
	{
		int A[t];
		for(i=0;i<t;i++)
		{
			scanf("%d",&A[i]);
		}
		for(i=0;i<t;i++)
		{
			pr(A[i]);
			prf(A[i]);
		}
	}
	return 0;
}
