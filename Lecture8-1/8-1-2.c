#include<stdio.h>

main()
{
	int n,sum = 0;
	printf("Enter Array N :");
	scanf("%d",&n);
	
	int a[n],i,avg;
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);
		sum += a[i];
	}
	avg = sum/n;
		printf("\nAverage  :%d\n",avg);
}
