#include<stdio.h>
int main()
{
	char str[101],a[101];
	int i;
		while(gets(str)!=NULL)
		{
			for(i=0;str[i]!='\0';i++)
			{
				if(str[i]==' '&&str[i+1]>='a'&&str[i]+1<='z')
				{
					str[i+1]=str[i+1]-32;
				}
				else if(str[i]>='a'&&str[i]<='z'&&i==0)
				{
					str[i]=str[i]-32;
				}
			}
			
			puts(str);
		}
}
