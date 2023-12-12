#include<stdio.h>
#define P printf
#define S scanf

main()
{
	int n,i;
	P("Enter The Array Size :");
	S("%d",&n);
	 
	
	int a[n];
	P("Enter Array Elements :\n");
	for(i=0;i<n;i++)
	{
		
		P("a[%d] :",i);
		S("%d",&a[i]);
	}

	P("Negative Elements :\n");
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			P("%d",a[i]);
		}
	}
}
