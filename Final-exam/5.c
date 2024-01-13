#include<stdio.h>
#define P printf
#define S scanf

struct bill
{
	int id;
	char name[20];
	int price;
	int qty;
	int dis;	
};

main()
{
	int i,n;
	
	FILE *fp;
	
	P("Enter The N :");
	S("%d",&n);
	struct bill b1[n];
	
	//input 
	for(i=0;i<n;i++)
	{
		P("\n\n------Bill Of %d------\n\n",i+1);
		P("Enter The Id :");
		S("%d",&b1[i].id);
		fflush(stdin);
		P("Enter The Name :");
		S("%s",&b1[i].name);
		fflush(stdin);
		P("Enter The Price :");
		S("%d",&b1[i].price);
		P("Enter The Qty :");
		S("%d",&b1[i].qty);
		P("Enter The Dis :");
		S("%d",&b1[i].dis);
	}
	
	//output
	for(i=0;i<n;i++)
	{
		P("\n\n------Bill Of %d------\n\n",i+1);
		P( "Id : %d\n",b1[i].id);
		fflush(stdin);
		P("Name : %s\n",b1[i].name);
		fflush(stdin);
		P("Price : %d\n",b1[i].price);
		P("Qty : %d\n",b1[i].qty);
		P("Dis : %d\n",b1[i].dis);
	}
	
	fp = fopen("bill.txt","w");
	
	for(i=0;i<n;i++)
	{
		fprintf(fp,"%d \n",b1[i].id);
		fprintf(fp,"%s \n",b1[i].name);
		fprintf(fp,"%d \n",b1[i].price);
		fprintf(fp,"%d \n",b1[i].qty);
		fprintf(fp,"%d \n",b1[i].dis);
		P("\n");
	}	
}

