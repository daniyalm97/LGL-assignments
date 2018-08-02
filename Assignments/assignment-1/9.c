//program to find square root of a number
#include<stdio.h>
#include<math.h>
void main()
{
int num;
printf("Enter a number:\n");
scanf("%d",&num);
if(num>0)
 {
  printf("square root is %.3f\n",sqrt(num));
 }
else
 {
  printf("invalid input. Enter a positive integer\n");
 }
}

