#include<stdio.h>
#define P printf
#define S scanf

void main()
{
	int r,c;
	P("Enter The Row Size :");
	S("%d",&r);
	P("Enter The Column Size :");
	S("%d",&c);
	
	int i,j,a[r][c],dia=0,ant=0,sum=0;
	
	P("\n-----Enter The Elements Of A-----\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			P("Enter A[%d][%d] :",i,j);
			S("%d",&a[i][j]);
		}
	}
	
	P("\n----Matrix-----\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			P("%d",a[i][j]);
		}
		P("\n");
	}
	
	P("\n----Diagonal Elements-----\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
				P("%d ",a[i][j]);
				dia+=a[i][j];
			}
			else
			{
				P("  ");
			}
		}
		P("\n");
	}
	
	P("\n----Anti-Diagonal Elements-----\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i+j==r-1)
			{
				P("%d ",a[i][j]);
				ant +=a[i][j];
			}
			else
			{
				P("  ");
			}
		}
		P("\n");
	}
	
	//Sum
	sum += (dia + ant);
	
	P("\n\n");
	//Display
	P("Sum Of Diagonal : %d\n\n",dia);
	P("Sum Of Anti-Diagonal : %d\n\n",ant);
	P("Sum OfDiagonal & Anti-Diagonal : %d",sum);	
}
