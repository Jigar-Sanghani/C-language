#include<stdio.h>

main()
{
	int n;
	printf("Enter Array N:");
	scanf("%d",&n);
	
	int a[n],b[n],c[n],i;
	printf("\nEnter Element A :\n\n");
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("\nEnter Element B :\n\n");
	for(i=0;i<n;i++)
	{
		printf("Enter b[%d]:",i);
		scanf("%d",&b[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
		printf("Sum c[%d]:%d\n",i,c[i]);
	}
}
