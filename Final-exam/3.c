#include<stdio.h>
#define P printf

main()
{
	int i,j,g=1;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			P("%d ",g);
			g++;
		}
		P("\n");
	}
}
