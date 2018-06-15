#include<stdio.h>
void main()
{
char a[100];
printf("Enter sentence:\n");
scanf("%[^\n]s",a);
printf("%s\n",a);
}
