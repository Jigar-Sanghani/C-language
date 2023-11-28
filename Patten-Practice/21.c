#include<stdio.h>
#define P printf

main()
{
	int i,j,k=1;
	for(i=1;i<=5;i++)
	{
		for(j=i;j>=1;j--)
		{
			P("%d ",k++);
		}
		P("\n");
	}
}
