#include<stdio.h>
#include<string.h>
struct inventory
{
	char itemname[20];
	int qty;
	float price;
};
void ask(struct	inventory obj[], int length);
void display(struct inventory obj[],int length);
int main(void)
{
	int length;
	printf("\n\npls enter how many records you want to store\n\n");
	scanf("%d",&length);
	struct inventory obj[100];
	ask(obj,length);
	display(obj,length);
}
void ask(struct inventory obj[],int length)
{
	int i=0;
	for(i=0;i<length;i++)
	{
		printf("\n\nenter the itemname\n\n");
		scanf("%s",&obj[i].itemname);
		printf("\n\nenter the quantity\n\n");
		scanf("%d",&obj[i].qty);
		printf("\n\nenter the price\n\n");
		scanf("%f",&obj[i].price);
	}
}
void display(struct inventory obj[],int length)
{
	float total=0;
	printf("\n\n\n");
	printf("item |	quanity	|	price |   total\n\n");
	int i=0;
	for(i=0;i<length;i++)
	{
printf("%s  	%d	    $%.2f	   $%.2f\n\n",obj[i].itemname,obj[i].qty,obj[i].price,obj[i].qty*obj[i].price);
total=(total+(obj[i].qty*obj[i].price));
	}
	printf("Grand Toatal	     		$ %.2f",total);
}
