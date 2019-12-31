#include<stdio.h>

int length(char *s)
{
	int count;
	while(*s!='\0')
	{
		*(s++);
		count++;
	}
	return count;
}

int main()
{
	char str[100];
	int x;
	while(gets(str)!=NULL)
	{
		x=length(str);
		printf("%d\n",x);
	}
	return 0;
}
