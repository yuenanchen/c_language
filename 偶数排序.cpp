#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,k,index,temp,j;
	char a[100],b[100];
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			if(a[i]%2==0)
			{
				for(j=0;j<n;j++)
				b[j]=a[i];
				break;
			}
		}
		for(k=0;k<(strlen(b)-1);k++)
		{
			index=k;
			for(i=k+1;i<strlen(b);i++)
			if(b[i]>b[index])
			index=i;
			temp=b[index];
			b[index]=b[k];
			b[k]=temp;
		}
		for(i=0;i<n;i++)
		{
			printf("%d ",b[i]);
		}
		
	}
}
