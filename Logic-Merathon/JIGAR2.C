#include<stdio.h>
#include<conio.h>
#define P printf

main()
{
	int i,j,s;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(s=1;s<=5-i;s++)
		{
			P(" ");
		}
		for(j=i;j<=(i*2)-1;j++)
		{
			P("%d",j);
		}
		for(j=(i*2)-2;j>=i;j--)
		{
			P("%d",j);
		}
		P("\n");
	}
	getch();
}