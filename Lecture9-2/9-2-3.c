#include<stdio.h>
#include<string.h>
#define P printf

main()
{
	char str[30];
	int i;
	
	P("Enter String :");
	gets(str);
	if(str[0]>=97&&str[0]<=122)
	{
		str[0]-=32;
	}
	
	P("String :");
	puts(str);
}
