#include<stdio.h>

void arrayreverse(int a[],int n)
{
	int *start = a;	
	int *end = a+n-1;
	int temp,i;
	
	while(start<end)
	{
		*start = *start + *end;
		*end = *start - *end;
		*start = *start - *end;
        start++;
        end--;
	}
	
	printf("Reverse :");
	
    for (i = 0; i < n; i++)
	 {
        printf("%d", a[i]);
        if (i < n - 1)
		{
            printf(", ");
        }
    }
}

void main()
{
	int n;
	printf("Enter The Array Length :");
	scanf("%d",&n);
	
	int	a[n],i;
	
	
	//input
	for(i=0;i<n;i++)
	{
		printf("Enter A[%d] :",i);
		scanf("%d",&a[i]);
	}
	
	arrayreverse(a,n);
	yreverse(a,n);
}
