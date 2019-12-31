#include<stdio.h> 
#include<math.h>
int main()
{int n,i,a=1,b=2,j;
while(j=1&&scanf("%d",&n)!=EOF){
	float sum=0.0;
	for(i=1;i<=n;i++){
	sum=sum+1.0*b/a;
	b=a+b;
	a=b-a;
}
printf("s=%.2f\n",sum);
j++;
}
return 0;
}

