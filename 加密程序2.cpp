#include<stdio.h>
#include<string.h>
int main()
{
	int i,len;
	char str[80];
	while(gets(str)!=NULL)
	{
		len=strlen(str);
		for(i=0;i<len;i++)
		{
			if(str[i]>=65&&str[i]<=90)
			{
			str[i]=155-str[i];
			}
			
		}
		puts(str);
	}
}
