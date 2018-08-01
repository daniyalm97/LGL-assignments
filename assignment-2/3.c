//program to find largest among 3 numbers
#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter three numbers\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
 {
 printf("%d is greatest\n",a);
 }
else if(b>c)
 {
 printf("%d is greatest\n",b);
 }
else
 {
 printf("%d is greatest\n",c);
 }
}
