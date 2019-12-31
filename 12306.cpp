#include <stdio.h>

int main(void)
{
	int T,k,i,j,a,b;
	int temp,N[100],M[100];
	while(scanf("%d",&T) != EOF)
	{
		for(i=0;i<T;i++)
		{
			scanf("%d",&k);
			for(j=0;j<k;j++)
			{
				scanf("%d %d",&N[j],&M[j]);
			}
			for (a=0; a<k-1; a++)
		    { 
		        for (b=0; b<k-1-a; b++) 
		        { 
		            if (N[b] > N[b+1]) 
		        	{
		        		temp = N[b];
		                N[b] = N[b+1];
		                N[b+1] = temp;
		                temp = M[b];
		                M[b] = M[b+1];
		                M[b+1] = temp;
		            }
		        }
		    }
			for(j=0;j<k;j++)
			{
				printf("%d\n",M[j]);
			}
		}
	}
}
