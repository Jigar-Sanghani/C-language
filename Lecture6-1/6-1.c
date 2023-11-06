#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	clrscr();
	printf("Enter A Number :");
	scanf("%d",&a);
	printf("\nEnter B Number :");
	scanf("%d",&b);
	   
	if(a > b)
	{
	  		printf("A Is Big !!");
	}	
	else
	{
	  		printf("B Is Big !!");
	}
	getch();
}
