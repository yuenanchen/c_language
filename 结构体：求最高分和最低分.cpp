#include<stdio.h>

struct student
{
	char num[20];
	char name[20];
	int score1;
};
int main()
{
	int i,n,maxp,minp;
	struct student  stu[20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",stu[i].num);
		scanf("%s",stu[i].name);
		scanf("%d",&stu[i].score1);
	}
	maxp=0;minp=0;
	for(i=1;i<n;i++)
	{
		if(stu[i].score1>stu[maxp].score1)
		maxp=i;
		if(stu[i].score1<stu[minp].score1)
		minp=i;
	}
		printf("%s %s %d\n",stu[maxp].num,stu[maxp].name,stu[maxp].score1);
	    printf("%s %s %d\n",stu[minp].num,stu[minp].name,stu[minp].score1);
}
