#include<stdio.h>
#include<string.h>


struct emp
{
	int id;
	char name[20];
	int age;
	char role[20];
	char city[20];
	int experience[20];
	int company_name[20]; 
};

void main()
{
	int i,n;
	printf("Enter No.Employee :");
	scanf("%d",&n);
	
	struct emp e1[n];
	for(i=0;i<n;i++)
	{
		printf("\n\n---Enter Employee %d Information---\n\n",i+1);
 		printf("Enter Your Id :");
 		scanf("%d",&e1[i].id);
 		fflush(stdin);
		printf("Enter Your Name :");
 		scanf("%s",&e1[i].name);
 		fflush(stdin);
 		printf("Enter Your Age :");
 		scanf("%d",&e1[i].age);
 		fflush(stdin);
 		printf("Enter Your Role :");
 		scanf("%s",&e1[i].role);
 		printf("Enter Your City :");
 		scanf("%s",&e1[i].city);
 		fflush(stdin);
 		printf("Enter Your Experience Year:");
 		scanf("%d",&e1[i].experience);
 		printf("Enter Your Company Name :");
 		scanf("%s",&e1[i].company_name);
 	}
 	
 	system("cls");
 	
 	for(i=0;i<n;i++)
 	{
 	   	 printf("\n\n---Enter Employee %d Output---\n\n",i+1);
		 printf("Id :%d\n",e1[i].id);
		 printf("Name :%s\n",e1[i].name);
		 printf("Age :%d\n",e1[i].age);
		 printf("Role :%s\n",e1[i].role);
		 printf("City :%s\n",e1[i].city);
		 printf("Experience Year :%d\n",e1[i].experience);
		 printf("Company Name :%s\n",e1[i].company_name);
	}
} 
