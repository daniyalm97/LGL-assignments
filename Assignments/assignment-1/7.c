//program to swap two numbers without temp variable
#include<stdio.h>
void main()
{
int a,b;
printf("Enter a and b:\n");
scanf("%d%d",&a,&b);
printf("Before swap, a=%d b=%d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("After swap, a=%d b=%d\n",a,b);
}
