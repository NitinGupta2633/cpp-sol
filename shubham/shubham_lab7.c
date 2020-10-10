#include<stdio.h>
void pointarray(int *array, int *sum,int *max ,int *range);
int main()
{
	int range=0,max=0,sum=0;
	printf("enter the range of array\n\n");
	scanf("%d",&range);
	int array[range];
	int i;
	printf("\n\nenter the numbers\n\n\n");
	for(i=0;i<range;i++)
	{
		scanf("%d",&array[i]);
	}
	pointarray(&array,&sum,&max,&range);
	printf("\n\n\nthe sum of numbers entered is  %d",sum);
	printf("\n\nthe max number of the entered numbers is %d",max);
	return 0;	
}
void pointarray(int *array, int *sum,int *max ,int *range)
{
	int i=0;
	*max=array[0];
	for(i=0;i<*range;i++)
	{
		printf("test");
		*sum=*sum+array[i];
		if(*max < array[i])
		{
			printf("test1");
			*max=array[i];
		}
	}
}
