#include<stdio.h>
#include<string.h>
struct book
{
	char author[50];
	char title[50];
};
void get_info(struct book obj[],int length);
void display(struct book obj[],int length);
void search(struct book obj[],char tittlename[],int lengthofarray);
int main(void)
{
	struct book obj[1000];
	int length;
	char x[50];
	printf("\n\nenter how many record = ");
	scanf(" %d",&length);
	get_info( obj,length);
	display(obj , length);
	printf("Enter the tittle to search for =");
	scanf("%s",&x);
	search( obj ,x,length);
	
	
}
void get_info(struct book obj[],int length)
{
	int i=0;
	for(i=0;i<length;i++)
	{
			printf("\n\nEnter the author = ");
			scanf("%s",&obj[i].author);
			printf("\n\nEnter the tittle = ");
			scanf("%s",&obj[i].title);
	}
	
}
void display(struct book obj[],int length)
{
	int i=0;
	printf("Author 			Tittle\n");
	for(i=0;i<length;i++)
	{
		printf("%s			%s\n\n",obj[i].author,obj[i].title);
	}
}
void search(struct book obj[],char tittlename[],int lengthofarray)
{
	int i=0,j=1;
	for( i=0;i<lengthofarray;i++)
	{
		j=strcmp(tittlename,obj[i].title);
		if(j==0)
		{
			printf("Book Found\n");
			printf("Author = %s	and tittle = %s",obj[i].author,obj[i].title);
		}
	}
	if(j!=0)
	{
		printf("book not found");
	}
}
