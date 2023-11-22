#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

main()
{
	float unit,bill,t_b,s_e;
	clrscr();
	P("Emter Your Bill Unit :");
	S("%f",&unit);

	if(unit<= 50)
	{
		    bill = unit * 0.5;
	}


	else if(unit>= 51 && unit<=150)
	{
		    bill =((unit-50) * 0.75) + 25;
	}


	else if(unit>= 151 && unit<=250)
	{
		    bill =((unit-150) * 1.2) + 100;
	}


	else
	{
		    bill =((unit-250) * 1.5) + 220;
	}

	s_e = bill * 0.2;
	t_b = bill + s_e;

	P("%f",t_b);
	getch();
}