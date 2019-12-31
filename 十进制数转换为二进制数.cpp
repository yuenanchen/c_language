
#include <stdio.h>

int main()
{

    int transfer(int x);
    int x;
    while(scanf("%d",&x)!=EOF)
{
    printf("%d\n",transfer(x));
}
}

int transfer(int x)

{

    int p=1,y=0,yushu;

    while(1)

    {

        yushu=x%2;

        x/=2;

        y+=yushu*p;

        p*=10;

        if(x<2)

        {

            y+=x*p;

            break;

        }

    }

    return y;

}

