#include<stdio.h>
#include<string.h>
void main()
{
char a[20];
int i,len,n=0;
printf("Enter the string:");
scanf("%s",a);
len=strlen(a);
while(len!=n)
 {
  for(i=len-1;i>=n;i--)
  {
   printf("%c",a[i]);
  }
 n++;
 printf("\n");
 }
}
