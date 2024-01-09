#include<stdio.h>

int  main()
{
	FILE *fp,*fp2;
	int i;
	
	fp = fopen("index.txt","a");
	fp2 = fopen("index2.txt","a");
	
	if((fp != NULL)&&(fp2 !=NULL))
	{
		for(i=50;i<70;i++)
		{
			if(i%2==0)
			{
				fprintf(fp,"%d ",i);
			}
			
			else
			{
				fprintf(fp2,"%d ",i);
			}
		}
	}
	else
	{
		printf("Error Does Not Found!!");
	}
}
