//program to convert celcius to farenheit
#include<stdio.h>
void main()
{
float cel,far;
printf("enter the temperature in farenheit:");
scanf("%f",&far);
cel=(5.0/9.0)*(far-32.0);
printf("Temperature in celcius = %.3f\nTemperature in farenheit = %.3f\n",cel,far);
}


