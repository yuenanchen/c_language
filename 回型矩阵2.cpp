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
while(tem<M*M) //tem是1到M*M值变量
{ //把方向分为4中状态 即 ctat 变量 上 下 左 右 （1 2 3 4）
data[i][j]=tem;
switch(ctat)
{
case 1:
{
if(j+1<M&&0==data[i][j+1]) //第一种状态右
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
if(i+1<M&&0==data[i+1][j]) //下
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
if(j-1>=0&&0==data[i][j-1]) //左
{
tem++;
j--;
}
else
ctat=4;
}
break;
case 4:
{ //上
if(i-1>=0&&0==data[i-1][j])
{
tem++;
i--;
}
else
ctat=1;//又上 状态1 依次 循环 至矩阵最后第2个值M*M-1；//最后第一个值有 本函数最后赋予
}
break;
default:
break;
}
}
data[i][j]=tem; //赋予最后一个 即 data[i][j]=M*M
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
