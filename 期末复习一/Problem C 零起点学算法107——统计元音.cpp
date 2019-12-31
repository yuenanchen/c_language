#include<stdio.h>
#include<string.h>
int main()
{ char a[200][200];
 int i,j,n,b[5][200]={0},p=n+1;
 getchar(); 
 scanf("%d",&n);
 
 for(i=0;i<n+1;i++)
 {
  	gets(a[i]);

  for(j=0;j<strlen(a[i]);j++)
  { if(a[i][j]=='a')
    b[0][i]++;
   if(a[i][j]=='e')
    b[1][i]++;
   if(a[i][j]=='i')
    b[2][i]++;
   if(a[i][j]=='o')
    b[3][i]++;
   if(a[i][j]=='u')
    b[4][i]++; 
  }
}
for(i=0;i<n+1;i++)
{
	p=p-1;
  printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d",b[0][i],b[1][i],b[2][i],b[3][i],b[4][i]);
  
  if(p!=0)
  	printf("\n\n");
}
 return 0;
}
