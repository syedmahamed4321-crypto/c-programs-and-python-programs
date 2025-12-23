#include<stdio.h>
void main()
{
int a,b,c,total,avg;
a=b=c=total=avg;
printf("enter three subject marks:");
scanf("%d%d%d",&a,&b,&c);
total=a+b+c;
avg=total/3;
printf("total is  %d\n",total);
printf("average is %d",avg);
}
