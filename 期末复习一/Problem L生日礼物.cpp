#include<stdio.h>
#include<string.h>
int main()
{
	int t,n,i;
	char a[100];
	char b[]="grandfather";
	char c[]="grandmother";
	char d[]="father";
	char e[]="mother";
	char f[]="brother";
	char g[]="sister";
	getchar();
	while(scanf("%d",&t)!=EOF)
	{
		for(i=0;i<t;i++)
		{
			gets(a);
			if(strcmp(a,b)==0)
			printf("yeye");
			else if(strcmp(a,c)==0)
			printf("nainai");
			else if(strcmp(a,d)==0)
			printf("baba");
			else if(strcmp(a,e)==0)
			printf("mama");
			else if(strcmp(a,f)==0)
			printf("gege");
			else if(strcmp(a,g)==0)
			printf("jiejie");
			printf("\n");
		}
	}
	return 0;
}

/*
#include<stdio.h>
#include<string.h>
int main() 
{ 
	int t,i; 
    char a[100]; 
    scanf("%d",&t); 
    getchar (); 
    for(i=0;i<t;i++) 
   {  
   		gets(a); 
     if(strcmp(a,"grandmother")==0)
		 printf("nainai"); 
     if(strcmp(a,"mother")==0) 
   	     printf("mama");
     if(strcmp(a,"father")==0) 
	     printf("baba");
	 if(strcmp(a,"grandfather")==0)
	     printf("yeye"); 
     if(strcmp(a,"brother")==0) 
	     printf("gege"); 
     if(strcmp(a,"sister")==0) 
	     printf("jiejie"); 
	     printf("\n");
	   } 
	  return 0; 
	  }
*/


