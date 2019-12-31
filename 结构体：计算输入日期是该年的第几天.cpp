#include<stdio.h>
int main()
{
    struct stu 
    {
        int y;
        int m;
        int d;  
    };
    struct stu s;
    while (scanf("%d-%d-%d",&s.y,&s.m,&s.d)!=EOF)
    {
        int i,sum=0;
        for (i=0;i<s.m;i++)
        {
            if (i==1 || i==3 || i==5 || i==7 || i==8 ||i==10)
            {
                sum=sum+31;
            }
            else if (i==2)
            {
                sum=sum+28;
                if ((s.y%4==0&&s.y%100!=0)||(s.y%400==0))
                {
                    sum=sum+1;
                }
            }
            else if (i==4 || i==6 || i==9 || i==11)
            {
                sum=sum+30;
            }
        }
        sum=sum+s.d;
        printf("%d\n",sum);
    }
    return 0;
}
