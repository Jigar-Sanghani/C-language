#include<stdio.h>
#define P printf
#define S scanf

main()
{
	int r,c;
	P("Enter The Row Size :");
	S("%d",&r);
	P("Enter The Column Size :");
	S("%d",&c);
	
	int a[r][c],i,j,r1,c1,sum_r=0,sum_c=0;
	P("\nEnter Array Elements :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			P("a[%d][%d] :",i,j);
			S("%d",&a[i][j]);
		}
	}
	
	P("\nElements In Matrix :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			P("%d ",a[i][j]);
		}
		printf("\n");
	}

	P("\nEnter Row Number :");
	S("%d",&r1);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(r1==i)
			{
				P("%d ",a[i][j]);
				sum_r += a[i][j];
			}
		}
	}
	P("\nSum :%d\n",sum_r);
	
	P("\nEnter Column Number :");
	S("%d",&c1);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(c1==j)
			{
				P("%d ",a[i][j]);
				sum_c += a[i][j];
			}
		}	
	}
	P("\nSum :%d",sum_c);
}

