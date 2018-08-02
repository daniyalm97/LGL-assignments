//program to check leap year
#include<stdio.h>
void main()
{
int a;
printf("enter an year:");
scanf("%d",&a);
if(((a%100!=0)&&(a%4==0))||(a%400==0))
{
 printf("%d is a leap year\n",a);
}
else
{
 printf("%d is not a leap year\n",a);
}
}

