#include<stdio.h>
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
	printf("entered number as follows");
	for(i=0;i<=9;i++)
	{
		printf("\nelement %d == %d \n\n",i+1,arr[i]);
		
	}
}

/* 				**************************** output******************** 
10 elements can be entered

				
enter the element 1

5

enter the element 2

65

enter the element 3

3

enter the element 4

5

enter the element 5

7

enter the element 6

8

enter the element 7

5

enter the element 8

7

enter the element 9

4

enter the element 10

5
entered number as follows
element 1 == 5


element 2 == 65


element 3 == 3


element 4 == 5


element 5 == 7


element 6 == 8


element 7 == 5


element 8 == 7


element 9 == 4


element 10 == 5

****************************************************************************output******************************************************
10 elements can be entered
			
				
enter the element 1

5

enter the element 2

4

enter the element 3

6

enter the element 4

3

enter the element 5

67

enter the element 6

34

enter the element 7

56

enter the element 8

345

enter the element 9

6

enter the element 10

4
entered number as follows
element 1 == 5


element 2 == 4


element 3 == 6


element 4 == 3


element 5 == 67


element 6 == 34


element 7 == 56


element 8 == 345


element 9 == 6


element 10 == 4



*/
