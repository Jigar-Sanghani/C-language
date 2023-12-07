#include<stdio.h>

main()
{
	int r,c;
	printf("Enter The Row Size :");
	scanf("%d",&r);
	printf("Enter The Column Size :");
	scanf("%d",&c);
	
	int a[r][c],b[r][c],d[r][c],i,j;
	
	printf("\nEnter Array A's Elements :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter The Eliments [%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
			
		}
	}
	printf("\n");
	
	printf("Enter Array B's Elements :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter The Eliments [%d][%d] :",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			d[i][j]=a[i][j]+b[i][j];
			printf("%d ",d[i][j]);
		}
		printf("\n");
	}
}
