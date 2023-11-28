#include<stdio.h>
#define P printf

main()
{
	int i,j,s;
	for(i=1;i<=5;i++)
	{
		for(s=1;s<=5-i;s++)
		{
			P(" ");
		}
		for(j=1;j<=i;j++)
		{
			P("%d",j);
		}
		P("\n");
	}
}
