#include<stdio.h>
#include<stdio.h>

main()
{
	int n;
	clrscr();
	printf("Enter Any Number :");
    scanf("%d",&n);
    
    if(n > 0)
	{
    	printf("Positive");
	}
	else if(n == 0)
	{
		printf("Nuterel");
	}
	else
	{
		printf("Negative");
	}
	getch();
}
