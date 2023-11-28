#include<stdio.h>
#define P printf

main()
{
	int i,j;
	for(i=45;i<=49;i++)
	{
		for(j=45;j<=i;j++)
		{
			P("%d ",j);
		}
		P("\n");
	}
}
