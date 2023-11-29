#include<stdio.h>
#define P printf

main()
{
	int i,j,s;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			P("%d ",j);
		}
		P("\n");
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			P("%d ",j);
		}
		P("\n");
	}
}
