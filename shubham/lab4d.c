#include<stdio.h>
void finadlargest(float p[]);
int main()
{
	float arr[10];
 	int i;
 	i=0;
 	
 	for(i=0;i<10;i++)
 	{
 		printf("\nenter the %d  number\n",i+1);
 		scanf("%f",&arr[i]);
 	
	 } 
	 printf("\nvalues you have entered\n");
	 for(i=0;i<10;i++)
	 {
	 	printf("%f\n",arr[i]);
	 }
	 finadlargest(arr);
}
void finadlargest(float p[])
{float max;
int i;
max=0;
	for(i=0;i<10;i++)
 	{
 		if(p[i]>max)
 		{
 			max=p[i];
		 }
	 } 
	 printf("\nlargest number =%.3f",max);
}
/* 
outputs

enter the 1  number
435.43534

enter the 2  number
45

enter the 3  number
345

enter the 4  number
3

enter the 5  number
5

enter the 6  number
65.34534

enter the 7  number
45.65546

enter the 8  number
4355.345

enter the 9  number
3

enter the 10  number
6

values you have entered
435.435333
45.000000
345.000000
3.000000
5.000000
65.345337
45.655460
4355.345215
3.000000
6.000000

largest number =4355.345


***********************output 2************************************************

enter the 1  number
546

enter the 2  number
46545.456

enter the 3  number
45

enter the 4  number
3

enter the 5  number
5

enter the 6  number
6.435

enter the 7  number
5

enter the 8  number
4

enter the 9  number
6

enter the 10  number
7

values you have entered
546.000000
46545.457031
45.000000
3.000000
5.000000
6.435000
5.000000
4.000000
6.000000
7.000000

largest number =46545.457
*/
