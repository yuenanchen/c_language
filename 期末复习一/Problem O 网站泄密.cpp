#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    int m1,m2;
    int i,j;
    int flag;
    int q;
    scanf("%d",&n);
    while(n--)
    {
        flag=0;
        scanf("%d%d",&m1,&m2);
        if(m1==1)
        {
            for(i=m1+1;i<=m2;i++)
        {
            q=sqrt(i);
            for(j=2;j<=q;j++)
            {
                if(i%j==0)
                break;
            }
            if(j>q&&flag==0)
            {
                printf("%d",i);
                flag=1;
                continue;
            }
            if(j>q&&flag==1)
            printf("% d",i);
             
        }
        printf("\n");
        }
        if(m1>1)
        {
            for(i=m1;i<=m2;i++)
        {
            q=sqrt(i);
            for(j=2;j<=q;j++)
            {
                if(i%j==0)
                break;
            }
            if(j>q&&flag==0)
            {
                printf("%d",i);
                flag=1;
                continue;
            }
            if(j>q&&flag==1)
            printf("% d",i);
        }
        printf("\n");
         
        }
} 
}
