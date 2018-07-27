#include<stdio.h>
void main()
{
	int a[10]={9,8,7,6,5,4,3,2,1,0};
	int n,i,j,temp;
	n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]<a[j])
			{
			temp=a[j];
			a[j]=a[i];
			a[i]=temp;
		}
		}
	}
	printf("Array\n");
	for(i=0;i<n;i++)
	{
	printf("%d  ",a[i]);
    }
    printf("\n");
}
