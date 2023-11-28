#include<stdio.h>
#define P printf

main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			P("%d ",j);
		}
		P("\n");
	}
}
