#include<stdio.h>
#include<string.h>
#define P printf

main()
{
	char ema[20],pas[20],ema1[20],pas1[20];
	P("Enter The Email :");
	gets(ema);
	P("Enter The Password :");
	gets(pas);
	
	P("\n-----------------");
	P("\nLogin Succesfully\n");
	P("-----------------\n");
	
	P("Enter The Email :");
	gets(ema1);
	P("Enter The Password :");
	gets(pas1);
	
	if (strcmp(ema1,ema)==0&& strcmp(pas1,pas)==0)
	{
		P("\n---------------------------\n");
		P("Password And Email Match !!\n");
		P("---------------------------");
	}
	else
	{
		P("\n-----------------------------------\n");
		P("Password And Email Does Not Match!!");
    	P("\n-----------------------------------\n");
	}
}
