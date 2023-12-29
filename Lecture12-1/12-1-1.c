#include<stdio.h>
#include<string.h>


struct student
{
	int id;
	char name[20];
	int age;
	char cource[20];
	char city[20];
	int standard[20];
	int school[20]; 
};

void main()
{
	int i,n;
	printf("Enter No. Student :");
	scanf("%d",&n);
	
	struct student s1[n];
	for(i=0;i<n;i++)
	{
		printf("\n\n---Enter Student %d Information---\n\n",i+1);
 		printf("Enter Your Id :");
 		scanf("%d",&s1[i].id);
 		fflush(stdin);
		printf("Enter Your Name :");
 		scanf("%s",&s1[i].name);
 		fflush(stdin);
 		printf("Enter Your Age :");
 		scanf("%d",&s1[i].age);
 		fflush(stdin);
 		printf("Enter Your Course :");
 		scanf("%s",&s1[i].cource);
 		printf("Enter Your City :");
 		scanf("%s",&s1[i].city);
 		printf("Enter Your Standard :");
 		scanf("%d",&s1[i].standard);
 		printf("Enter Your School :");
 		scanf("%s",&s1[i].school);
 	}
 	
 	system("cls");
 	 	
 	for(i=0;i<n;i++)
 	{
 	   	 printf("\n\n---Enter Student %d Output---\n\n",i+1);
		 printf("Id :%d\n",s1[i].id);
		 printf("Name :%s\n",s1[i].name);
		 printf("Age :%d\n",s1[i].age);
		 printf("Course :%s\n",s1[i].cource);
		 printf("City :%s\n",s1[i].city);
		 printf("Standard :%s\n",s1[i].standard);
		 printf("School :%s\n",s1[i].school);
	}
} 
