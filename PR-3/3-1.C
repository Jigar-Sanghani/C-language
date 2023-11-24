#include<stdio.h>
#include<conio.h>

main()
{
	char J='a';
	clrscr();
	do
	{
		printf("%c ",J);
		J+=4;

	}
	while(J<='z');
	getch();
}