#include<stdio.h>


int sum(int n,int a[])
{ 
	int sum=0,i;
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	return sum;
}
void main()
{
	int n;
	printf("Enter The Array Size :");
	scanf("%d",&n);
	
	int a[n],i;
		
	for(i=0;i<n;i++)
	{
		printf("Enter The A[%d] :",i);
		scanf("%d",&a[i]);
	}
	
	sum(n,a);
	
	printf("\nSum :%d",sum(n,a));
}
