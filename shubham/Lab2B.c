#include <stdio.h>
	
void header(void);
int square(int number);

void main(void)
{ 
int index;
int sum,sq;
header(); 
for (index = 1;index <= 7;index++)
{
 sq=square(index); 
 sum=sum+sq;
printf("The square of %d is %d\n",index,sq);
	printf("\nThe sum of the squares is %d\n",sum);
}
 getch();
}

void header(void)
{
	printf("This is the header for the square program\n\n");
	
}

int square(int number)
{
		  int numsq;
	numsq = number * number; 
	    return numsq;
	
}

