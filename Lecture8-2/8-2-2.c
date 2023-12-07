#include<stdio.h>
#define P printf
#define S scanf

main()
{
	int n1,n2,i;
	P("Enter First Number :");
	S("%d",&n1);
	P("Enter Second Number :");
	S("%d",&n2);
	
	P("\n");
	for(i=n1;i<n2;i++)
	{
		if(n1%4==0)
		{
			P("%d ",n1);
		}
		n1++;
	}
}
