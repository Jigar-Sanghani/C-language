#include<stdio.h>
#define P printf

main()
{
	int i,j;
	for(i=65;i<=69;i++)
	{
		for(j=i;j>=65;j--)
		{
			P("%c ",j);
		}
		P("\n");
	}
}
