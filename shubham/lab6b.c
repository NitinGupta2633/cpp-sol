#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void myprintf(char s[]);
int main(void)
{
	char name[80];
	system("cls");
	printf("Enter your full name : ");
	gets(name);
	myprintf(name);
	system("pause");
	return (0);
}
void myprintf(char s[])
{
    	printf("\nYour name is %s\n\n",s);	
}
