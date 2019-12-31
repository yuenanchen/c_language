#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char a[10000];
    int b[26];
    
    while(gets(a)!=NULL)
    {
        for(int i=0;a[i]!='\0';i++)
        {
            if((a[i]<='U'&&a[i]>='A')||(a[i]<='u'&&a[i]>='a'))
            {
                a[i]=a[i]+('f'-'a');
            }
               else if((a[i]<='Z'&&a[i]>='V')||(a[i]<='z'&&a[i]>='v'))
                {
                	a[i]=a[i]-('v'-'a');
                }
    	}
			 for(int j=0;a[j]!='\0';j++)   
			 {
			 printf("%c",a[j]);	
			 }
             printf("\n");
    } 
    return 0;
}

