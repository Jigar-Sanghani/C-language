#include<stdio.h>
#define P printf
#define S scanf

main()
{
	int n;
	P("Enter The Array Size :");
	S("%d",&n);
	
	int a[n],i,sum;
	P("\nEnter Elements :\n");
	for(i=0;i<n;i++)
	{
		P("Enter A[%d] :",i);
		S("%d",&a[i]);
	}
	
	P("\nSquares : ");
	for(i=0;i<n;i++)
	{
		sum = a[i] * a[i];
		P("%d ",sum);
	}
	
	
}
