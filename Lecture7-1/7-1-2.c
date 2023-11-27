#include<stdio.h>
#define P printf

main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=i;j<=5;j++)
		{
			P("%d ",j);
		}
		P("\n");
	}
}
