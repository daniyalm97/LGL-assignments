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
int perm(int n,int r)
{
return fact(n)/fact(n-r);
}
int comb(int n,int r)
{
return fact(n)/(fact(n-r)*fact(r));
}
void main()
{
int n,r,per,com;
printf("Enter value of n and r:");
scanf("%d%d",&n,&r);
per=perm(n,r);
com=comb(n,r);
printf("Permutation: %dP%d=%d\n",n,r,per);
printf("Combination: %dC%d=%d\n",n,r,com);
}
