#include<stdio.h>
#define P printf

main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=i;j<=5;j++)
		{
			P("%d ",i);
		}
		P("\n");
	}
}
