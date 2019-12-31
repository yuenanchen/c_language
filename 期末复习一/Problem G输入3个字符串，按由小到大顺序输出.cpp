#include<stdio.h>
#include<string.h>
int main()
{
	char a[90],b[90],c[90],t[90];
	while(gets(a)!=NULL)
	{
		gets(b);
		gets(c);
		if(strcmp(a,b)>0)
        {
            strcpy(t,a);
            strcpy(a,b);
            strcpy(b,t);
        }
        if(strcmp(a,c)>0)
        {
            strcpy(t,a);
            strcpy(a,c);
            strcpy(c,t);
        }
        if(strcmp(b,c)>0)
        {
            strcpy(t,b);
            strcpy(b,c);
            strcpy(c,t);
       }
       puts(a);
       puts(b);
       puts(c);
   }
return 0;
	}

