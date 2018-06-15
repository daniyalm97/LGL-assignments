#include<stdio.h>
int fact(int n)
{
 if(n==0||n==1)
  {
  return 1;
  }
 else
  {
  return n*fact(n-1);
  }
}
void main()
{
int n,res;
printf("Enter a number:");
scanf("%d",&n);
res=fact(n);
printf("Factorial=%d\n",res);
}
