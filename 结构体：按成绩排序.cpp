#include<stdio.h>

struct student
{
	char num[20];
	char name[20];
	int score1;
};
void sort1(struct student p[],int n);
int main()
{
	int i,n;
	struct student  stu[20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",stu[i].num);
		scanf("%s",stu[i].name);
		scanf("%d",&stu[i].score1);
	}
	sort1(stu,n);
	for(i=0;i<n;i++)
	{
		printf("%s %s %d\n",stu[i].num,stu[i].name,stu[i].score1);
	}
} 
void sort1(struct student p[],int n)		//Ñ¡ÔñÅÅĞò·¨ 
{
	int j,i,min;
	struct student temp;
	for(j=0;j<n-1;j++)
	{
		min=j;
		for(i=j+1;i<n;i++)
		{
			if(p[i].score1<p[min].score1)
			min=i;	
		}
		if(min!=j)
		{
			temp=p[j];
			p[j]=p[min];
			p[min]=temp;
		}
	}
	
}
