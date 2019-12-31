#include<stdio.h>

int main()
{
	int y,m,d,sum,w;
	scanf("%d-%d-%d",&y,&m,&d);
	
	if((y%4==0&&y%100!=0)||(y%100==0&&y%400==0))
	{
		switch(m)
	{
		case 1:sum=0;
		break;
		case 2:sum=31;
		break;
		case 3:sum=31+29;
		break;
		case 4:sum=90+1;
		break;
		case 5:sum=120+1;
		break;
		case 6:sum=151+1;
		break;
		case 7:sum=181+1;
		break;
		case 8:sum=212+1;
		break;
		case 9:sum=243+1;
		break;
		case 10:sum=273+1;
		break;
		case 11:sum=304+1;
		break;
		case 12:sum=334+1;
		break;
	}
	w=d+sum;
	printf("%d",w);
		}
	else
	{
		switch(m)
	{
		case 1:sum=0;
		break;
		case 2:sum=31;
		break;
		case 3:sum=31+28;
		break;
		case 4:sum=90;
		break;
		case 5:sum=120;
		break;
		case 6:sum=151;
		break;
		case 7:sum=181;
		break;
		case 8:sum=212;
		break;
		case 9:sum=243;
		break;
		case 10:sum=273;
		break;
		case 11:sum=304;
		break;
		case 12:sum=334;
		break;
	}
	w=d+sum;
	printf("%d",w);
		}	
	return 0; 
 } 
