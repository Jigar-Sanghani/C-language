#include<stdio.h>
#include<string.h>
#define P printf

main()
{
	char str[30];
	int i,ch=0,di=0,sp=0,sy=0;
	
	P("Enter Your Password :");
	gets(str);
	
	for(i=0;str[i]!= '\0';i++)
	{
		if((str[i]>=65&&str[i]<=90) && (str[i]>=97&&str[i]<=122))
		{
			ch++;
		}
		else if(str[i]>=48&&str[i]<=57)
		{
			di++;
		}
		else if(str[i]==32)
		{
			sp++;
		}
		else
		{
			sy++;
		}
	}
	if(ch>0&&di>0&&sp==0&&sy>0&&strlen(str)>5)
	{
		P("Your Password Is Strong !!");
	}
	else
	{
		P("Your Password Is Not Strong !!");
	}
}
