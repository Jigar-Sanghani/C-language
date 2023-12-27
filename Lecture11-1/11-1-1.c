#include<stdio.h>

void main()
{
	int n;
	printf("Enter The Array Length :");
	scanf("%d",&n);
	
	int a[n],i,sum[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter A[%d] :",i);
		scanf("%d",&a[i]);
		sum [i] = a[i] * a[i];
	}
	
	int *ptr[n];
	
	for(i=0;i<n;i++)
	{
		ptr[i] = &sum[i];
	}
	
	printf("Square :");
	for(i=0;i<n;i++)
	{
		printf("%d ",*ptr[i]);
	}
	
	
}
