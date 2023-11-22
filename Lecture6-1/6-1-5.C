#include<stdio.h>
#include<conio.h>

main()
{
	int J,n;
	clrscr();
	printf("Enter Your First Year :");
	scanf("%d",&J);
	printf("Enter Your Second Year :");
	scanf("%d",&n);

	while(n>=J)
	{
		if(J%4==0)
		{
			printf("%d ",J);
		}
		J++;
	}


	getch();
}