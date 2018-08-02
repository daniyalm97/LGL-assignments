//program to find day of the month
#include<stdio.h>
void main()
{
int dd,mm,yy,day,month,year,count,n;
int mon[12]={1,4,4,0,2,5,0,3,6,1,4,12};
printf("Enter the following\nDate:");
scanf("%d",&dd);
printf("Month:");
scanf("%d",&mm);
printf("Year:");
scanf("%d",&yy);
printf("Date:%d/%d/%d\n",dd,mm,yy);
year=(yy-1900)/4;
year+=yy-1900;
month=mon[mm-1];
year+=month;
year+=dd;
day=year%7;
printf("Day:");
switch(day)
 {
 case 0: printf("Saturday\n");break;
 case 1: printf("Sunday\n");break;
 case 2: printf("Monday\n");break;
 case 3: printf("Tuesday\n");break;
 case 4: printf("Wednesday\n");break;
 case 5: printf("Thursday\n");break;
 case 6: printf("Friday\n");break;
 }
}
