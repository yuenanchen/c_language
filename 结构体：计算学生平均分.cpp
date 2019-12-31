#include<stdio.h>
struct student
{
	char num[20];
	char name[20];
	int score1;
	int score2;
	float ave;
	
};
int main()
{
	int i;
	struct student  stu[3];
	for(i=0;i<3;i++)
	{
		scanf("%s",stu[i].num);
		scanf("%s",stu[i].name);
		scanf("%d",&stu[i].score1);
		scanf("%d",&stu[i].score2);
		stu[i].ave=(stu[i].score1+stu[i].score2)/2.0;
	}
	for(i=0;i<3;i++)
	{
		printf("ave[%d]=%.1f\n",i,stu[i].ave);
	}
}
