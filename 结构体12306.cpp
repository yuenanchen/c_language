#include<stdio.h>
struct stu
{
	int n,m;
};

void sort2(struct stu p[],int n);
int main()
{
	struct stu a[20];
	int i,k,t;
	while(scanf("%d",&t)!=EOF)
	{
		for (i=0;i<t;i++)
			scanf("%d",&k);
		for(i=0;i<k;i++)
		{
			scanf("%d %d",&a[i].n,&a[i].m);
		}
		sort2(a,k);

		for(i=0;i<k;i++)
		{
			printf("%d\n",a[i].m);
		}
	
}
	return 0;
}

void sort2(struct stu p[],int n)
{
	int i,j;
	struct stu temp;
	for(j=0;j<n;j++)
	{
		for(i=j;i<n;i++)
		{
			if(p[j].n>p[i].n)
			temp=p[j];
			p[j]=p[i];
			p[i]=temp;
		}
	}
}

