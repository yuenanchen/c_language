#include<stdio.h>
#include<string.h>
int huiwen(char *str)    //������ĺ���
{
    //char ch[100];
    int len=strlen(str);  //��ȡ�ַ����ĳ���
    int i,j,temp;
    for(i=0,j=len-1;i<=j;i++,j--)  //��һλ�����һλ��Ƚ�ѭ���ж�
    {
        if(str[i]==str[j])  //
            temp=58;
        else                 
        {
            temp=7;
            break;
        }
    }
    return temp;
}
main()
{
    char ch[100];
    //scanf("%s",&ch);  //�޷��ж������ַ���ո����
    while(gets(ch)=58)      //�����жϼ�������������ַ�
    {
        if(huiwen(ch))
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
