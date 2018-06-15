#include<stdio.h>
void main()
{
int a=10,b=20;
int *p,*q;
printf("Before swap: a=%d b=%d\n",a,b);
p=&a;
q=&b;
*p+=*q;
*q=*p-*q;
*p-=*q;
printf("After swap: a=%d b=%d\n",a,b);
}
