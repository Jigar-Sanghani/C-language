#include<stdio.h>
#define P printf

main()
{
	int i,j,s;
	for(i=1;i<=5;i++)
	{
		for(s=1;s<=i-1;s++)
		{
			P("  ");
		}
		for(j=i;j<=5;j++)
		{
			if(j%2==0)
			{
				P("0 ");
			}
			else
			{
				P("1 ");
			}
		}
		P("\n");
	}
}
