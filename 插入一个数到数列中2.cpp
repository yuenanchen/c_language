
#include <stdio.h>

int main()
{

	int i,key,loc;

	int a[9]={0,10,20,30,40,50,60,70,80};

	    scanf("%d",&key);

	    loc=0;

	    for(i=0;i<9;i++)
		{

		if(a[i]>=key)
		 break;

		}

		 loc=i;
		for(i=7;i>=loc;i--)
		{

		 a[i+1]=a[i];

		}

		a[loc]=key;
        for(i=0;i<10;i++)
		{

		printf(" %d",a[i]);

		}

		printf("\n");

}

