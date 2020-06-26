#include<stdio.h>//includeing header files
int main() //main function
{
	int arr[5]={50,55,60,65,70};  //intializing the array
	int i;
	    printf("\n\n array index value    array number values  "); 
	for(i=0;i<5;i++)  // for printing the index values as number values
	{
		printf(" \n  %d                           %d \n ",i,arr[i]);
	}
	
}
/*
              outputs
		
		 array index value    array number values
  0                           50

  1                           55

  2                           60

  3                           65

  4                           70
	  */
	  
	  
	  // the address of 60 is 0x62fe08
