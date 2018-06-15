#include<stdio.h>
void fib(int n)
{
int i,a=0,b=1,c;
for(i=1;i<=n;++i)
{
 if(a>0&&a<=50)
 {
 printf("%d\n",a);
 }
 c=a+b;
 a=b;
 b=c;
}
}
void main()
{
int n=50;
fib(n);
}
