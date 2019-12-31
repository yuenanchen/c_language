#include<stdio.h>
void sort(int *p, int n);
 
int main()
{
	int n,i;
	int a[101];
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		sort(a,n); 
		for(i=0;i<n-1;i++)
        printf("%d ",a[i]);
        printf("%d",a[n-1]);
        printf("\n");
	}
}

void sort(int *p, int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
    for(j=i;j<n;j++)
    if(p[i]>p[j])
    {
        temp=p[i];
        p[i]=p[j];
        p[j]=temp;
    }
}
