#include<stdio.h>
#define P printf

main()
{
	int i,j,s;
	for(i=1;i<=5;i++)
	{
		for(s=1;s<=i-1;s++)
		{
			P(" ");
		}
		for(j=i;j<=5;j++)
		{
			P("%d",j);
		}
		P("\n");
	}
}
