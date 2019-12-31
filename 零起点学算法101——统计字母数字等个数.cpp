#include<stdio.h>
int main()
{
	
	char str[101];
	while(gets(str)!=NULL)
	{
	int a=0,b=0,c=0,d=0,i;
		for(i=0;str[i]!='\0';i++)
		{
			if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z')
			{
				a=a+1;
			}
			else if(str[i]>=48&&str[i]<=57)
			{
				b=b+1;
			}
			else if(str[i]==' ')
			{
				c=c+1;
			}
			else
			{
				d=d+1;
			}
			
			
		}
		printf("%d %d %d %d\n",a,b,c,d);
	}
}
