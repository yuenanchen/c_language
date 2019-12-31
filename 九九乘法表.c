#include<stdio.h>
int main()
{
int x,y,i;
 while(scanf("%d",&x)!=EOF)
  for(i=1;i<=x;i++)
   {for(y=1;y<=i;y++)
      printf("%d*%d=%-2d ",y,i,i*y);
   	  printf("\n");
   }
   return 0;
} 
