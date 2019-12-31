#include<stdio.h>

int main()
{
	int n,i;
	int f[30];
	while(scanf("%d",&n)!=EOF)
	{
		f[1]=1;
		f[2]=1;
		for(i=3;i<=n;i++)
		{
			f[i]=f[i-1]+f[i-2];
		}
		printf("%d\n",f[n]);
	}
}
