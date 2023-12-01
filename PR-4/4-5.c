#include<stdio.h>
#define P printf

main()
{
	int i,j,s;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			P("%d",j);
		}
		for(s=1;s<=5-i;s++)
		{
			P("  ");
		}
		for(j=i;j>=1;j--)
		{
			P("%d",j);
		}
		P("\n");
	}
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i-1;j++)
		{
			P("%d",j);
		}
		for(s=1;s<=5-(i-1);s++)
		{
			P("  ");
		}
		for(j=i-1;j>=1;j--)
		{
			P("%d",j);
		}
		P("\n");
	}
}
