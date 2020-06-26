#include<stdio.h>
int main()
{
	char s[]={"stressed"};
	int count,i;
	count=0;
	i=0;
	for(i=0;s[i]!='\0';i++)
	{
		printf("%c",s[i]);
		count++;
	}
	printf("\n\nprinting the given word in reverse\n\n");
	for(i=count;i>=0;i--)
	{
		printf("%c",s[i]);
	}
	
}
