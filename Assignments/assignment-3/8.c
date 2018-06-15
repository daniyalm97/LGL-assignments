#include<stdio.h>
void printarr(int a[],int n)
{
int i;
for(i=0;i<n;i++)
 {
  printf("%d  ",a[i]);
 }
printf("\n");
}
void main()
{
int n,i,arr[40];
printf("Enter array size:");
scanf("%d",&n);
printf("Enter array elements:\n");
for(i=0;i<n;i++)
{
 scanf("%d",&arr[i]);
}
printf("Array:\n");
printarr(arr,n);
}
