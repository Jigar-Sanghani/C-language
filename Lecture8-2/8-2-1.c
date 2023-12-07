#include<stdio.h>
#define P printf
#define S scanf

main()
{
	int n1;
	P("Enter Array A's Size :");
	S("%d",&n1);
	
	int a[n1],i;
	P("Enter A Elements :\n");
	for(i=0;i<n1;i++)
	{
		P("Enter A[%d] :",i);
		S("%d",&a[i]);	
	}
	
	int n2;
	P("\nEnter Array B's Size :");
	S("%d",&n2);
	
	int b[n2],c[i];
	P("Enter B Elements :\n");
	for(i=0;i<n2;i++)
	{
		P("Enter B[%d] :",i);
		S("%d",&b[i]);	
	}
	//insert Elements A -> C
	for(i=0;i<n1;i++)
	{
		c[i] = a[i];
	}
	//insert Elements B -> C
	for(i=0;i<n2;i++)
	{
		c[i+n1] = b[i];
	}
	P("\n");
	for(i=0;i<n1+n2;i++)
	{
		P("Merge : %d ",c[i]);
	}
}
