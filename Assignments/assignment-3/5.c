#include<stdio.h>
void main()
{
int n,i,num,rev=0,sum=0,prod=1,count=0;
printf("Enter a number:");
scanf("%d",&n);
i=n;
while(n!=0)
{
num=n%10;
sum+=num;
prod*=num;
rev=rev*10+num;
n=n/10;
count++;
}
if(i==rev)
{
printf("Number is a palindrome\n");
}
else
{
printf("Number is not a palindrome\n");
}
printf("Number of digits:%d\n",count);
printf("Sum of digits:%d\n",sum);
printf("Product of digits:%d\n",prod);
}
