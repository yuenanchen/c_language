#include <stdio.h>
#include <string.h>

struct yuanyin
{
	int a,e,i,o,u;
}A;

int main(void)
{
	int n,i,l,j;
	scanf("%d",&n);
	char str[101];
	gets(str);
	for(i=0;i<n;i++)
	{
		A.a=0;A.e=0;A.i=0;A.o=0;A.u=0;
		gets(str);
		l=strlen(str);
		for(j=0;j<l;j++)
		{
			if(str[j] == 'a')
			{
				A.a++;
			}else if(str[j] == 'e')
			{
				A.e++;
			}else if(str[j] == 'i')
			{
				A.i++;
			}else if(str[j] == 'o')
			{
				A.o++;
			}else if(str[j] == 'u')
			{
				A.u++;
			}
		}
		printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n",A.a,A.e,A.i,A.o,A.u);
		printf("\n");
	}
	return 0;
}
