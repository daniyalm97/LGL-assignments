//program to check vowel or consonant
#include<stdio.h>
void main()
{
char c;
printf("enter a character:");
scanf("%c",&c);
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
{
 printf("%c is a vowel\n",c);
}
else
{
 printf("%c is a consonant\n",c);
}
}

