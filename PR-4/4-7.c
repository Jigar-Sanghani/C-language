#include<stdio.h>

main()
{
	int i,s,j;
	for(i=5;i>=1;i--)
	{
		for(s=1;s<=i-1;s++)
		{
			printf(" ");
		}
		for(j=i;j<=5;j++)
		{
			printf("*",j);
		}
		for(j=4;j>=i;j--)
		{
			printf("*",j);
		}
		printf("\n");
	}

	for(i=2;i<=5;i++)
	{
		for(s=1;s<=i-1;s++)
		{
			printf(" ");
		}
		for(j=i;j<=5;j++)
		{
			printf("*",j);
		}
		for(j=4;j>=i;j--)
		{
			printf("*",j);
		}
		printf("\n");
	}
}
