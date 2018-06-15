#include<stdio.h>
void main()
{
int a[10]={9,6,7,3,8,5,2,4,1,0};
int *p,i,n,b=10;
printf("Enter the number to be added:");
scanf("%d",&n);
p=a;
printf("OUTPUT:\n");
for(i=0;i<b;i++)
{
printf("%d\n",*p+n);
p++;
}
}
