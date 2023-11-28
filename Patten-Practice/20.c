#include<stdio.h>

main()
{
	int i;
	for(i=1;i<=4;i++)
	{
		if(i==1)
		{
			printf("   *");
		}
		else if(i==2)
		{
			printf("  * *");
		}
		else if(i==3)
		{
			printf(" *   *");
		}
		else
		{
			printf("*     *");
		}
		printf("\n");
	}
}
