#include <stdio.h>
#include <string.h>

int main()
{
    char passwd[80];
    int i,j,k,t;
    while(gets(passwd)!=NULL)
    {
        for(i=0; i<strlen(passwd); i++)
        {
            if(passwd[i] >=65 && passwd[i]<=90)
            {
                passwd[i] = passwd[i]+5;
            }
            else if(passwd[i]>=97 && passwd[i]<=122)
            {
                passwd[i] = passwd[i]+5;
            }
        }
        puts(passwd); 
    }
    return 0;
}
