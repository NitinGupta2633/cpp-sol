#include<stdio.h>
#define j 13
void checkNegative()
{
    int n=1;
    	int x;
	while(n==1){
   start:	

	printf("Enter the age");
	scanf("%d",&x);
	 if(x>0)
	{
		printf("%d",x);
		break;
	}
	else {
		goto start;
	}
}
}
int main()
{
	printf(“A is %5.2f > %3d.”, 7.8, 9); 
	int i,j=978;
	if(j)
	{
		printf("54");
	}
	float d=23.3455454768764534654656;
	printf("%f",d);
	printf("Enter the age\n");;
	scanf("%d",&i);
	if(i>0)
	{
		printf("%d",i);
	}
	else
	{
	   checkNegative();
	}
}
