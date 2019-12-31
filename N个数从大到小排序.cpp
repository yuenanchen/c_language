#include<stdio.h>
int main()
{
	int n,str[101],i,index,k,temp;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&str[i]);
		}
		for(k=0;k<n-1;k++)
		{
			index=k;
			for(i=k+1;i<n;i++)
			if(str[i]>str[index])
			index=i;
			temp=str[index];
			str[index]=str[k];
			str[k]=temp;
		}
		for(i=0;i<n;i++)
		{
			printf("%d ",str[i]);
		}
	}
}
