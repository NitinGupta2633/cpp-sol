#define _CRT_SECURE_NO_WARNINGS  

#include <stdio.h> 
#include <conio.h>
#include <stdlib.h> 
int compareTwo(float V1, float V2);
int main(void) 
{

    system("cls");
     int result;
    float  V1, V2;
    printf("\n\nEnter first Number. ");
    scanf("%f", &V1);
    printf("\n\nEnter the second numbers."); 
    scanf("%f", &V2);
    result=compareTwo(V1,V2);
    if(result==1)
    {
    	printf("\n\n\tSmallest number:  %-11.2f", V2); 
        printf("\n\n\tLargest number:  %11.2f", V1);
  	}
	else if(result==0)
	{
    printf("\n\n\t Numbers are equal."); 
   	}
	else 
	{
		printf("\n\n\tSmallest number:  %-11.2f", V1); 
    printf("\n\n\tLargest number:  %11.2f", V2);
	}
    printf("\n\n Press any key to exit the program... ");  
    getch();     
   return 0; 
} 
int compareTwo(float V1,float V2)
{
	if(V1>V2)
	{
		return +1;
	}
	else if(V1==V2)
	{
		return 0;
	}
	else 
	{
		return -1;
	}
}

