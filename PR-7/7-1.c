#include<stdio.h>
#define P printf
#define S scanf

void sum()
{
	int a,b;
	P("\nEnter The A :");
	S("%d",&a);
	P("Enter The B :");
	S("%d",&b);
	P("Sum :%d\n",a+b);
}

void sub()
{
	int a,b;
	P("\nEnter The A :");
	S("%d",&a);
	P("Enter The B :");
	S("%d",&b);
	P("Sub :%d\n",a-b);
}

void mul()
{
	int a,b;
	P("\nEnter The A :");
	S("%d",&a);
	P("Enter The B :");
	S("%d",&b);
	P("Mul :%d\n",a*b);
}

void div()
{
	int a,b;
	P("\nEnter The A :");
	S("%d",&a);
	P("Enter The B :");
	S("%d",&b);
	P("Div :%d\n",a/b);
}

void mod()
{
	int a,b;
	P("\nEnter The A :");
	S("%d",&a);
	P("Enter The B :");
	S("%d",&b);
	P("Mod :%d\n",a%b);
}

void main()
{
	int choice;
	do
	{
		P("Press 1) For Sum :\n");
		P("Press 2) For Sub :\n");
		P("Press 3) For Mul :\n");
		P("Press 4) For Div :\n");
		P("Press 5) For Mod :\n");
		P("Press 0) For Exit :\n");
		P("Enter Your Choice :");
		S("%d",&choice);
		
		switch(choice)
		{
			case 1:
				sum();
			break;
			
			case 2:
				sub();
			break;
			
			case 3:
				mul();
			break;
			
			case 4:
				div();
			break;
			
			case 5:
				mod();
			break;
			
			default:
				P("\nInvalid Choice !!");
		}
	}while(choice!=0);
	e!=0);
}

