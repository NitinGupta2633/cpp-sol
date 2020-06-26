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
	printf("enter the number you want to search\n\n");
	scanf("%d",&x);
	int mid,end,n,start;
	start=0;
	n=-1;
	end=9;
	 while (start <= end) 
	 {
    int mid = start + (end - start) / 2;

    if (arr[mid] == x)
      {
      	n=1;
      	printf("the number %d is in the list at index %d",x,mid);
	  }

    if (arr[mid] < x)
      start = mid + 1;

    else
      end= mid - 1;
  }	
	if(n==-1)
	{
		printf(" sorry the element is not in the array");
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

/* *****************************outputs******************************************
10 elements can be entered


enter the element 1

4

enter the element 2

5

enter the element 3

7

enter the element 4

435

enter the element 5

67

enter the element 6

45

enter the element 7

2

enter the element 8

6

enter the element 9

8

enter the element 10

0
entered number in sorted order is as  follows
element 1 == 0


element 2 == 2


element 3 == 4


element 4 == 5


element 5 == 6


element 6 == 7


element 7 == 8


element 8 == 45


element 9 == 67


element 10 == 435

enter the number you want to search

0

the number 0 is in the list at index 0


*************************************************************************************
10 elements can be entered


enter the element 1

34

enter the element 2

56

enter the element 3

345

enter the element 4

56

enter the element 5

43

enter the element 6


645

enter the element 7

435

enter the element 8

335

enter the element 9

454

enter the element 10

34
entered number in sorted order is as  follows
element 1 == 34


element 2 == 34


element 3 == 43


element 4 == 56


element 5 == 56


element 6 == 335


element 7 == 345


element 8 == 435


element 9 == 454


element 10 == 645

enter the number you want to search

4
 sorry the element is not in the array

*/

