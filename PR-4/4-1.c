#include<stdio.h>
#define P printf

main()
{
	int i,j,k=11;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			P("%d ",k);
			k+=11;
		}
		P("\n");
	}
}
