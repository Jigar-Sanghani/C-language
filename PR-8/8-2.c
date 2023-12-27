#include<stdio.h>

void cube(int r,int c,int *ptr[r][c])
{
	int i,j;
	
	//cube & output
	
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Cube : %d\n",(*ptr[i][j]) * (*ptr[i][j]) * (*ptr[i][j]));
		}
	}
}

void main()
{
	int r,c;
	printf("Enter The Row :");
	scanf("%d",&r);
	printf("Enter The Column :");
	scanf("%d",&c);
	
	int a[r][c],i,j;
	
	//input
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter A[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	int *ptr[r][c];
	
	//address given 
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			ptr[i][j] = &a[i][j];
		}
	}
	
	cube(r,c,&ptr);
}
