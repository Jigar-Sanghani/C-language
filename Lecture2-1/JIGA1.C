#include<stdio.h>
#include<conio.h>
#define P printf

main()
{
	int a=12,b=6;
	clrscr();
	P("Sum Of %d & %d :%d\n",a,b,a+b);
	P("Sub Of %d & %d :%d\n",a,b,a-b);
	P("Mul Of %d & %d :%d\n",a,b,a*b);
	P("Div Of %d & %d :%d\n",a,b,a/b);
	P("Mod Of %d & %d :%d\n",a,b,a%b);
	getch();
}
