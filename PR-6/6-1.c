#include<stdio.h>

main()
{
	char str[20];
	int i,length=0,cmp=0;
	
	printf("Enter String :");
	scanf("%s",&str);
	
	for(i=0;str[i]!='\0';i++)
	{
		length++;
	}
	
	char cpy[length],rev[length];
	
	for(i=0;i<length;i++)
	{
		cpy[i]=str[i];
	}
	for(i=0;i<length;i++)
	{
		rev[length-i-1]=str[i];
	}
	for(i=0;i<length;i++)
	{
		if(cpy[i]==rev[i])
		{
			printf("Palindrome !!");
			break;			
		}
		else
		{
			printf("Not Palindrome !!");
			break;
		}
	}
}

