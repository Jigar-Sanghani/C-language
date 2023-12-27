#include<stdio.h>

int length(char *name)
{
	int length = 0;
    
	while (*name != '\0') 
	{
        length++;
        name++;
    }

    return length;
}

void main()
{
	char name[30];
	printf("Enter Any String :");
	scanf("%s",name);
	
	
	int l =length(name);
    printf("Length is: %d\n", l);

}
