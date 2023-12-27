#include<stdio.h>

void main()
{
	char name[20];
	printf("Enter The String :");
	scanf("%d",&name);
	
	int *ptr[20],i,len=0;
	
	for(i=0;name[i]!='\0';i++)
	{
		ptr[i] = &name[i];
	}
	
	for(i=0;ptr[i]!='\0';i++)
	{
		len++;
	}
	
	printf("Lrngth :%d",len);
	
}
