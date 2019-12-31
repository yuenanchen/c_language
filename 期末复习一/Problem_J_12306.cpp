#include<stdio.h>
int main()
{
    int n,i,j,q,t;
    struct stu
    {
        int f;
        int y;
    };
    struct stu s[100],z;
    while (scanf("%d",&n)!=EOF)
    {
        for (i=0;i<n;i++)
        {
            scanf("%d",&t);
            for (j=0;j<t;j++)
            {
                scanf("%d %d",&s[j].f,&s[j].y);
            }
            for (j=0;j<t;j++)
            {
                for (q=j;q<t;q++)
                {
                    if (s[j].f>s[q].f)
                    {
                        z=s[j];
                        s[j]=s[q];
                        s[q]=z;
                    }
                }
            }
            for (j=0;j<t;j++)
            {
                printf("%d\n",s[j].y);
            }
        }
    }
    return 0;
}
