#include<stdio.h>


void swap(int *x,int *y)
{
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
	
	printf("\nX :%d\nY :%d",*x,*y);
}

void main()
{
	int x,y;
	printf("Enter The X :");
	scanf("%d",&x);
	printf("Enter The Y :");
	scanf("%d",&y);
	
	swap(&x,&y);
}
