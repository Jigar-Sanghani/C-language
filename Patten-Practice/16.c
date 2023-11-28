#include<stdio.h>
#define P printf

main()
{
	int i,j,s;
	for(i=1;i<=5;i++)
	{
		for(j=i;j>=1;j--)
		{
			P("%d",j);
		}
		P("\n");
	}
	for(i=4;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			P("%d",j);
		}
		P("\n");
	}
}
