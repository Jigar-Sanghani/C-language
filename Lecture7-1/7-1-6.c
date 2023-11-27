#include<stdio.h>
#define P printf

main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2==0)
			{
				P("0");
			}
			else 
			{
				P("1");
			}
		}
		P("\n");
	}
}
