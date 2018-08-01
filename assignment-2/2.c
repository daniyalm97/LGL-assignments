//program for calculator app
#include<stdio.h>
#include<stdlib.h>
void main()
{
int n;
float a,b;
label:
printf("\n-----Options-----\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n0.exit\n:");
scanf("%d",&n);
if(n>4)
 {
 printf("invalid option\n");
 goto label;
 }
else if(!n)
 {
 exit(0);
 }
printf("Enter first number:");
scanf("%f",&a);
printf("Enter second number:");
scanf("%f",&b);
printf("Answer: ");
switch(n)
 {
 case 1: printf("%.2f\n",a+b);break;
 case 2: printf("%.2f\n",a-b);break;
 case 3: printf("%.2f\n",a*b);break;
 case 4: printf("%.2f\n",a/b);break;
 }
goto label;
}
