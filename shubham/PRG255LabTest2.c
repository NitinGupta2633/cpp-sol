#include<stdio.h>
#include<string.h>
struct student
{
	char name[30];
	int Student_id;
	int semester;
	float fees;
};
void print(struct student s[],int x)
{
	printf("\n\nThe details you entered are as follows***************\n\n");
	printf("Name		Student Id		semester		fees\n\n");
	int i=0;
	for(i=0;i<x;i++)
	{
		if(s[i].fees >5000.00)
	{
		
		printf("%s		%d				%d		%f\n\n",s[i].name,s[i].Student_id,s[i].semester,s[i].fees);
	}
	}
}
int main()
{
	int x;
	struct student s1[31];
	printf("\n\nenter the number of students\n\n");
	scanf("%d",&x);
	int i=0;
	printf("enter the details\n\n");
	for(i=0;i<x;i++)
	{
		printf("enter details for student %d",i+1);
		printf("\n\nName=");
		scanf("%s",&s1[i].name);
		printf("\n\nStudent Id =");
		scanf("%d",&s1[i].Student_id);
		printf("\n\nsemester= ");
		scanf("%d",&s1[i].semester);
		printf("\n\nfess=");
		scanf("%f",&s1[i].fees);
	}
	print(s1,x);
}




/*enter the number of students

***************************************output*************************

2
enter the details

enter details for student 1

Name=nitin


Student Id =43


semester= 2


fess=1000
enter details for student 2

Name=hs


Student Id =54


semester= 2


fess=100000


The details you entered are as follows***************

Name            Student Id              semester                fees

hs              54                              2               100000.000000







*******************************************************************
enter the number of students

2
enter the details

enter details for student 1

Name=nitin


Student Id =24


semester= 1


fess=100
enter details for student 2

Name=shunham


Student Id =12


semester= 4


fess=12000


The details you entered are as follows***************

Name            Student Id              semester                fees

shunham         12                              4               12000.000000




*/
