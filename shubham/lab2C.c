#include <stdio.h>
	
void header(void);
void square(int number);

void main(void)
{ 
int index;
header(); 
for (index = 1;index <= 7;index++)
{
square(index); 
}
 getch();
}

void header(void)
{
	printf("This is the header for the square program\n\n");
}

void square(int number)
{
		  int numsq;
		  static int sum;
	numsq = number * number;  sum = sum + numsq;
	printf("The square of %d is %d\n",number,numsq);
	printf("\nThe sum of the squares is %d\n",sum);
}

