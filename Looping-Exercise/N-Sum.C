#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

main()
{
	int n,i=1;sum=0;
	clrscr();
	P("Enter The N :");
	S("%d",&n);

	while(i<=n)
	{
		sum = sum + i;
		i++;
	}
	P("Sum Of N Num :%d",sum);
	getch();
}