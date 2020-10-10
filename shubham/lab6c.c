#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void myprintf(char s[],int no_of_char);
int no_of_chars(char s[]);
int main(void)
{
	char name[80];
	system("cls");
	printf("Enter your full name : ");
	gets(name);
	int number;
	number=no_of_chars(name);
	myprintf(name,number);
	system("pause");
	return (0);
}
void myprintf(char s[],int no_of_char)
{
    	printf("\nYour name is %s\n\n",s);
		printf("your name has %d characters in total\n\n",no_of_char);	
}
int no_of_chars(char s[])
{
	int i=0,result=0;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]!=' ')
		{
			result++;
		}
	}
	return result; 
}
