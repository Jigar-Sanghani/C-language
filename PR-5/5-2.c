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
	
	int a[r][c],i,j,b=0;
	P("\nEnter Array Elements :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			P("a[%d][%d] :",i,j);
			S("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(b<a[i][j])
			{
				b=a[i][j];
			}
		}
	}
	
	P("\nMaximum Value :%d\n",b);
	
	
}
