#include<stdio.h> 
int sort(int *a,int l)
{
    int i;
    for (i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=l-1;i>0;i--)
    {
        printf("%d ",a[i]);
    }
    printf("%d\n",a[i]); 
}
int main()
{
    int n,a[100];
    while (scanf("%d",&n)!=EOF)
    {
        sort(a,n);
    }
    return 0;
}
