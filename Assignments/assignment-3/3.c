#include<stdio.h>
int isprime(int n);
void main()
{
int i;
for(i=2;i<=30;i++)
{
 if(isprime(i))
 {
  printf("%d\n",i);
 }
}
}
int isprime(int n)
{
int i,flag=0;
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
flag=1;
break;
}
else
{
flag=0;
}
}
if(flag==0)
return 1;
else
return 0;
}
