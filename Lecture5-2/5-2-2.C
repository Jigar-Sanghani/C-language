#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

main()
{
	int a,b,c,d;
	clrscr();
	P("Enter The A :");
	S("%d",&a);
	P("Enter The B :");
	S("%d",&b);
	P("Enter The C :");
	S("%d",&c);
	P("Enter The D :");
	S("%d",&d);

	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				P("A Is Big !!");
			}
			else
			{
				P("D Is Big !!");
			}
		}
		else
		{
			if(c>d)
			{
				P("C Is Big !!");
			}
			else
			{
				P("D Is Big !!");
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				P("B Is Big !!");
			}
			else
			{
				P("D Is Big !!");
			}
		}
		else
		{
			if(c>d)
			{
				P("C Is Big !!");
			}
			else
			{
				P("D Is Big !!");
			}
		}
	}

	getch();
}