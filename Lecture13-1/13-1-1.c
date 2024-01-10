#include<stdio.h>

int main()
{
	FILE *fp,*fp2;
	int i;
	
	fp = fopen("1.txt","r");
	fp2 = fopen("2.txt","a");
	
	if((fp !=NULL)&&(fp2 !=NULL))
	{
		fprintf(fp,"%d",i);
		fprintf(fp2,"%d",i);
	}
	else
	{
		printf("Error !!");
	}
}
