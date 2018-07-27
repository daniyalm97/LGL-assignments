#include<stdio.h>
void main()
{
	int a[10],i,j,n,e,p;
	printf("Array size:");
	scanf("%d",&n);
	printf("Array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter element, index:");
	scanf("%d%d",&e,&p);
	for(i=0;i<n+1;i++)
	{
		if(i==p)
		{
			for(j=n+1;j>p;j--)
			{
				a[j]=a[j-1];
			}
			a[i]=e;
		}
	}
	printf("Final array:\n");
	for(i=0;i<n+1;i++)
	{
		printf("%d  ",a[i]);
	}
	printf("\n");
}
