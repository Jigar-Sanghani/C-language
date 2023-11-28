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
		for(j=(2*i)-1;j<=1;j++)
		{
			P("*",j);
		}
		P("\n");
	}
}
