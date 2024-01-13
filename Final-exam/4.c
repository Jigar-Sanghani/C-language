#include<stdio.h>
#define P printf
#define S scanf

main()
{
	int n;
	P("Enter The Array Size :");
	S("%d",&n);
	
	int a[n],b[n],c[n],i;
	
	P("\n-----Enter The Elements Of A-----\n");
	for(i=0;i<n;i++)
	{
		P("Enter The A[%d] : ",i);
		S("%d",&a[i]);
	}
	
	P("\n-----Enter The Elements Of B-----\n");
	for(i=0;i<n;i++)
	{
		P("Enter The B[%d] : ",i);
		S("%d",&b[i]);
	}
	
	//swap
	for(i=0;i<n;i++)
	{
		a[i] = a[i] + b[i];
		b[i] = a[i] - b[i];
		a[i] = a[i] - b[i];
	}
	
	//display
	P("\n");
	for(i=0;i<n;i++)
	{
		P("A : %d",a[i]);
		P("\n");
	}
	
	P("\n");
	for(i=0;i<n;i++)
	{
		P("B : %d",b[i]);
		P("\n");
	}
}
