//program to calculate gross salary
#include<stdio.h>
#include<string.h>
struct employee
{
char name[20];
float salary;
float hra;
float pa;
};
void main()
{
int i,j,n,m;
float pf,gs;
char name[20];
struct employee e[20];
printf("Enter the number of employees:");
scanf("%d",&n);
for(i=0;i<n;i++)
 {
 printf("Employee %d\n",i+1);
 printf("\tName:");
 scanf("%s",e[i].name);
 printf("\tSalary:");
 scanf("%f",&e[i].salary);
 printf("\tHRA:");
 scanf("%f",&e[i].hra);
 printf("\tPA:");
 scanf("%f",&e[i].pa);
 }
while(n!=0)
 {
 printf("\nEnter the name of the employee whose salary is to be calculated\n:");
 scanf("%s",name);
 for(j=0;j<i;j++)
  {
  if(!strcmp(name,e[j].name))
   {
   m=j;
   break; 
   }
  }
 pf=(e[m].salary*12)/100;
 gs=pf+e[m].hra+e[m].pa;
 printf("\nName:%s\n",e[m].name);
 printf("PF:%.2f\n",pf);
 printf("Gross Salary:%.2f\n",gs);
 n--;
 }
}
