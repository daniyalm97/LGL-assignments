#include<stdio.h>
void main()
{
	int a[8]={1,2,3,4,5,6,7,8};
	int odd[10],even[10];
	int n=sizeof(a)/sizeof(a[0]),i,j=0,k=0;
	printf("%d",n);
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			even[j]=a[i];
			j++;
		}
		else if(a[i]%2==1)
		{
			odd[k]=a[i];
			k++;
		}
	}
	printf("Odd elements\n");
	for(i=0;i<k;i++)
	{
		printf("%d  ",odd[i]);
	}
	printf("\n");
	printf("Even elements\n");
	for(i=0;i<j;i++)
	{
		printf("%d  ",even[i]);
	}
}
