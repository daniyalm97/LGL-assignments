//program to calc are and circumference of a circle
#include<stdio.h>
#define pi 3.1415 
void main()
{
float r;
printf("Enter the radius of the circle:");
scanf("%f",&r);
printf("Area = %.3f\n",pi*r*r);
printf("Circumfernece = %.3f\n",2*pi*r);
}

