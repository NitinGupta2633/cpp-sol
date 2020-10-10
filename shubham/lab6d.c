#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void myprintf(char s[],int no_of_char);

int main(void)
{
	char name[80];
	system("cls");
	printf("Enter your full name : ");
	gets(name);
	int number;
	number=strlen(name);
	myprintf(name,number);
	system("pause");
	return (0);
}
void myprintf(char s[],int no_of_char)
{
    	printf("\nYour name is %s\n\n",s);
		printf("your name has %d characters in total including spaces \n\n",no_of_char);	
}

