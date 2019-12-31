
#include<stdio.h>
int jump(int s,int y)
{
    int k;
    if (s==0)
    {
        k=y+1;  
    }
    else
    {
        k=2*jump(s-1,y);    
    } 
    return k;
} 
int main()
{
    int s,y,sum,n;
    while (scanf("%d",&n)!=EOF)
    {
        int i;
        for (i=0;i<n;i++)
        {
        scanf("%d %d",&s,&y);
        sum=jump(s,y);
        printf("%d\n",sum); 
        }
    }
    return 0;
}
