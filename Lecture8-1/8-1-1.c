#include<stdio.h>

main()
{
	int n;
	printf("Enter Array N :");
	scanf("%d",&n);
	
	int a[n],i;
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]:",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nLength :%d\n",n);
}
