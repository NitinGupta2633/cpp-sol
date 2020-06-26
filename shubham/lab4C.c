#include<stdio.h>
int main()
{
	float arr[10];
 	int i;
 	i=0;
 	float max;
 	max=0;
 	for(i=0;i<10;i++)
 	{
 		printf("\nenter the %d  number\n",i+1);
 		scanf("%f",&arr[i]);
 		if(arr[i]>max)
 		{
 			max=arr[i];
		 }
	 } 
	 printf("\nvalues you have entered\n");
	 for(i=0;i<10;i++)
	 {
	 	printf("%f\n",arr[i]);
	 }
	 printf("\nlargest number =%.3f",max);
}

/*

outputs 
enter the 1  number
56.57

enter the 2  number
5

enter the 3  number
35.7

enter the 4  number
4

enter the 5  number
8

enter the 6  number
9

enter the 7  number
2.5654

enter the 8  number
75.576576

enter the 9  number
2.1000

enter the 10  number
100

values you have entered
56.570000
5.000000
35.700001
4.000000
8.000000
9.000000
2.565400
75.576576
2.100000
100.000000
largest number =100.000



output -2

enter the 1  number
87

enter the 2  number
7567.65756765

enter the 3  number
57

enter the 4  number
656

enter the 5  number
756

enter the 6  number
8

enter the 7  number
5

enter the 8  number
6

enter the 9  number
4.67

enter the 10  number
46.865

values you have entered
87.000000
7567.657715
57.000000
656.000000
756.000000
8.000000
5.000000
6.000000
4.670000
46.865002

largest number =7567.658


*/
