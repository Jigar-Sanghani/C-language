#include<stdio.h>
#include<conio.h>

main()
{
	int J=1,n;
	clrscr();
	printf("Enter Your Number : ");
	scanf("%d",&n);
	while (J<=n)
	{
		printf("%d  ",J);
		J++;
	}
	getch();
}