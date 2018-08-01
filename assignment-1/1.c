//program to perform arithmetic operations and print result to 3 decimal places
#include<stdio.h>
void main()
{
 float a,b;
 printf("Enter the two float numbers:\n");
 scanf("%f%f",&a,&b);
 printf("sum = %.3f\n",a+b);
 printf("difference = %.3f\n",a-b);
 printf("product = %.3f\n",a*b);
 printf("quotient = %.3f\n",a/b);
 printf("remainder = %d\n",(int)a%(int)b);
}
