#include<stdio.h>
#include<conio.h>

main()
{
	int n,J;
	clrscr();
	printf("Enter Your Number : ");
	scanf("%d",&J);
	while(J>=n)
	{
		if(J%2==1)
		{
			printf("%d ",J);
		}
		J--;
	}
	getch();
}