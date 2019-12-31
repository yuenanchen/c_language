#include<stdio.h>
#include<string.h>
int main()
{
char s[50];
int i,j,k,n,a,b,c,d,e;
scanf("%d",&n);
getchar();
k=n-1;
while(n--)
{a=0;
b=0;
c=0;
d=0;
e=0;
gets(s);
j=strlen(s);
for(i=0;i<j;i++)
{
if(s[i]=='a'||s[i]=='H'||s[i]=='A'||s[i]=='h')
a++;
if(s[i]=='e'||s[i]=='E')
b++;
if(s[i]=='I'||s[i]=='i'||s[i]=='Y'||s[i]=='y')
c++;
if(s[i]=='O'||s[i]=='o')
d++;
if(s[i]=='U'||s[i]=='u')
e++;
}
printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n",a,b,c,d,e);
}
return 0;
}
