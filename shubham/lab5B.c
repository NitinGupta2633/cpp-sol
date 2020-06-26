#include<stdio.h>
void ascending(int arr[],int size);
int main()
{
	int x ,arr[10],i;
	i=0;
	printf("10 elements can be entered\n\n");
	for(i=0;i<=9;i++)
	{
		printf("\nenter the element %d\n\n",i+1);
		scanf("%d",&arr[i]);
	}
	 ascending(arr,10);
	printf("entered number in sorted order is as  follows");
	for(i=0;i<=9;i++)
	{
		printf("\nelement %d == %d \n\n",i+1,arr[i]);
		
	}
}
void ascending(int arr[],int size)
{
	int i,j,swap;
	for(i=0;i<=size-1;i++)
	{
		for(j=0;j<=size-1;j++)
		{
			if(arr[i]<arr[j])
			{
				swap=arr[i];
				arr[i]=arr[j];
				arr[j]=swap;
			}
		}
	}
}

/***********************************ouputs****************

elements can be entered


enter the element 1

5435

enter the element 2

565

enter the element 3

6

enter the element 4

4

enter the element 5

6

enter the element 6

3

enter the element 7

10

enter the element 8

54

enter the element 9

45

enter the element 10

5
entered number in sorted order is as  follows
element 1 == 3


element 2 == 4


element 3 == 5


element 4 == 6


element 5 == 6


element 6 == 10


element 7 == 45


element 8 == 54


element 9 == 565


element 10 == 5435



***************************************outut***********************************************
elements can be entered


enter the element 1

78

enter the element 2

657

enter the element 3

456

enter the element 4

34

enter the element 5

7

enter the element 6

3

enter the element 7

7

enter the element 8

57

enter the element 9

10

enter the element 10

100
entered number in sorted order is as  follows
element 1 == 3


element 2 == 7


element 3 == 7


element 4 == 10


element 5 == 34


element 6 == 57


element 7 == 78


element 8 == 100


element 9 == 456


element 10 == 657


*/
