//program to convert celcius to farenheit
#include<stdio.h>
void main()
{
float cel,far;
printf("enter the temperature in celcius:");
scanf("%f",&cel);
far=((9.0/5.0)*cel)+32.0;
printf("Temperature in celcius = %.3f\nTemperature in farenheit = %.3f\n",cel,far);
}


