#include<stdio.h>
#define M 10
int data[M][M];
void max()
{
int tem;
int ctat;
int i,j;
i=j=0;
tem=ctat=1;
while(tem<M*M) //tem��1��M*Mֵ����
{ //�ѷ����Ϊ4��״̬ �� ctat ���� �� �� �� �� ��1 2 3 4��
data[i][j]=tem;
switch(ctat)
{
case 1:
{
if(j+1<M&&0==data[i][j+1]) //��һ��״̬��
{
tem++;
j++;
}
else
ctat=2;
}
break;
case 2:
{
if(i+1<M&&0==data[i+1][j]) //��
{
tem++;
i++;
}
else
ctat=3;
}
break;
case 3:
{
if(j-1>=0&&0==data[i][j-1]) //��
{
tem++;
j--;
}
else
ctat=4;
}
break;
case 4:
{ //��
if(i-1>=0&&0==data[i-1][j])
{
tem++;
i--;
}
else
ctat=1;//���� ״̬1 ���� ѭ�� ����������2��ֵM*M-1��//����һ��ֵ�� �����������
}
break;
default:
break;
}
}
data[i][j]=tem; //�������һ�� �� data[i][j]=M*M
}
int main()
{

int i,j;
max();
for(i=0;i<M;i++)
{
for(j=0;j<M;j++)
printf("%4d",data[i][j]);
printf("\n");
}
} 
