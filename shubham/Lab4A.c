#include<stdio.h> //including header file
int main()   //main function
{
	char s[]={'s','t','r','e','s','s','e','d'}; // intializing character array
	int count,i;// i is the itrating variable and count is used  for counting the characters in the array
	count=0;
	i=0;
	printf("\nThe string in forward position\n");
	for(i=0;s[i]!='\0';i++)   // for loop used for forward printing of the character array
	{
		printf("%c",s[i]);
		count++;
	}
	printf("\n\nprinting the given word in reverse\n\n");
	for(i=count;i>=0;i--)
	{
		printf("%c",s[i]);
	}
	
}/*   output 

The string in forward position
stressed

printing the given word in reverse

desserts */
 
 
 //additional task
/* the address of 's' is  0x62fe10*/
