
#include <stdio.h>
int main()
{
	int i,n,r;
	while(scanf("%d",&n)!=EOF)
	{
		for(i = 1;i <= n;i++)
		{
			for(r = 1; r < i;r++)
			{
				printf("%d*%d=%d ",r,i,i*r);
				if(i*r<10)
				printf(" ");
			}
			printf("%d*%d=%d",r,i,i*r);
			if(i*r<10)
			    printf(" ");
            printf("\n");
		}
		printf("\n");
	}
	return 0;
} 
