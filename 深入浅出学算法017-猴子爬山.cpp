#include<stdio.h>

int main()
{
	int n,k;
	while(scanf("%d",&n)!=EOF)
	{
		int f[100];
		f[1]=1;
		f[2]=1;
		f[3]=2;
		for(k=4;k<=n;k++)
		{
			f[k]=f[k-1]+f[k-3];
		}
		printf("%d\n",f[n]);
	}
}
