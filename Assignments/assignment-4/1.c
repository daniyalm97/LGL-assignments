#include<stdio.h>
void getarray(int a[],int n)
{
int i;
for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
}
void main()
{
int i,n,a[10],b[10];
printf("Enter array size:");
scanf("%d",&n);
printf("Enter array 1:");
getarray(a,n);
printf("Enter array 2:");
getarray(b,n);
printf("Reverse sum:\n");
for(i=n-1;i>=0;i--)
 {
 printf("%d\n",a[i]+b[i]);
 }
}
