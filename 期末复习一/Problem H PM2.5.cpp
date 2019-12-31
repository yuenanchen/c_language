#include <stdio.h>

int main()
{
	int t,i;
	while(scanf("%d",&t) != EOF)
	{
		int P[t];
		char p[t];
		for(i=0;i<t;i++)
		{
			scanf("%d",&P[i]);
		}
		for(i=0;i<t;i++)
		{
			if(P[i] >= 0 && P[i] < 35)
			{
				p[i]='A';
			}
			else if(P[i] >= 35 && P[i] < 75)
			{
				p[i]='B';
			}
			else if(P[i] >= 75 && P[i] < 115)
			{
				p[i]='C';
			}
			else if(P[i] >= 115 && P[i] < 150)
			{
				p[i]='D';
			}
			else if(P[i] >= 150 && P[i] < 250)
			{
				p[i]='E';
			}
			else if(P[i] >= 250)
			{
				p[i]='F';
			}
		}
		for(i=0;i<t;i++)
		{
			printf("%c\n",p[i]);
		}
	}
	return 0;
}
