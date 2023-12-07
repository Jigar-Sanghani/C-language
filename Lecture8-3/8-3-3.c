#include<stdio.h>

main()
{
	int r,sum=0;
	
	printf("Enter The Rows & Column Size :");
	scanf("%d",&r);
	
	int a[r][r],i,j;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("Enter The Eliments [%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}	
	}
	printf("Sum Of Diagonal Elements :%d",sum);
	
}
