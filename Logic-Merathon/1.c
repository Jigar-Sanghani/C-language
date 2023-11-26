#include<stdio.h>
#define P printf
#define S scanf

main()
{
	int n,choice=0;
	P("Welcome To KBC !!\n");
	
	P("1)Who Was Enveter Of R&W :\n");
	P("1) Vrajesh Rank \n");
	P("2) Kuldeep  \n");
	P("3) Jay Gondaliya \n");
	P("4) Hasmukh Sir \n");
	S("%d",&choice);
	switch(choice)
	{
			case 1:
					P("You Are Wrong !!\n");
			break;
			case 2:
					P("You Are Wrong !!\n");
			break;
			case 3:
					P("You Are Wrong !!\n");
			break;	
			case 4:
					P("You Are Right !!\n");
			break;
	}
	
	
	P("2) Capital Of India :\n");
	P("1) Dilhi \n");
	P("2) Gujarat  \n");
	P("3) Mumbai \n");
	P("4) Rajasthan \n");
	S("%d",&choice);
	switch(choice)
	{
			case 1:
					P("You Are Right !!\n");
			break;
			case 2:
					P("You Are Wrong !!\n");
			break;
			case 3:
					P("You Are Wrong !!\n");
			break;	
			case 4:
					P("You Are Wrong !!\n");
			break;
	}
	
	
	P("3)Capital Of Gujarat :\n");
	P("1) Surat \n");
	P("2) Ahemdabad \n");
	P("3) Gandhinagar \n");
	P("4) Bhuj \n");
	S("%d",&choice);
	switch(choice)
	{
			case 1:
					P("You Are Wrong !!\n");
			break;
			case 2:
					P("You Are Wrong !!\n");
			break;
			case 3:
					P("You Are Right !!\n");
			break;	
			case 4:
					P("You Are Wrong !!\n");
			break;
	}
		
	P("4) :How Many Age To Vote \n");
	P("1) 18\n");
	P("2) 22\n");
	P("3) 25 \n");
	P("4) 67 \n");
	S("%d",&choice);
	switch(choice)
	{
			case 1:
					P("You Are Right !!\n");
			break;
			case 2:
					P("You Are Wrong !!\n");
			break;
			case 3:
					P("You Are Wrong !!\n");
			break;	
			case 4:
					P("You Are Wrong !!\n");
			break;
	}
			
	P("5) :10+20= \n");
	P("1) 30\n");
	P("2) 22\n");
	P("3) 25 \n");
	P("4) 67 \n");
	S("%d",&choice);
	switch(choice)
	{
			case 1:
					P("You Are Right !!\n");
			break;
			case 2:
					P("You Are Wrong !!\n");
			break;
			case 3:
					P("You Are Wrong !!\n");
			break;	
			case 4:
					P("You Are Wrong !!\n");
			break;
	}
}
