#include<stdio.h>

int search(int list[], int n, int x)
{
	int i,p=-1;
	for(i=0;i<n;i++)
	{
		if(list[i]==x)
		{
			p=i;
		}
	}

	return p;
}

int main()
{
	int n,i,list[10],x,y,a;
	while(scanf("%d",&a)!=EOF)
	{
		list[0]=a;
		for(i=1;i<10;i++)
		{
			scanf("%d",&list[i]);
		}
		scanf("%d",&x);
		y=search(list,10,x);
		if(y==-1)
		{
			printf("Not found\n");
		}
		else
		{
			printf("%d\n",y);
		}
	}
}
