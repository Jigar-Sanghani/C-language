#include<stdio.h>

main()
{
	
	int r,c;
	
	printf("Enter The Row :");
	scanf("%d",&r);
	printf("Enter The Column :");
	scanf("%d",&c);
	
	int a[r][c],i,j,n;
	float sum=0,avg;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter The Eliments [%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
			sum+=a[i][j];
		}
			
	}

	n=r*c;
	avg=sum/n;
	
		printf("Average Is :%.2f",avg);
	
}

