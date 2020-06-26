#include<stdio.h>
void header(void);     //function  declration for header 
float calculate_V2(float V1,float R1, float R2, float R3, float R4);  //function declaratoin for calculatoin of V2
int main()      //main function
{
	float V1,V2,R1,R2,R3,R4;   // declaraton of the variables for taking input from the user 
	header();
	printf("\nEnter the value of V1\n\n");      //taking input from the user
	scanf("%f",&V1);                            
	printf("\nEnter the value of R1\n\n");      
	scanf("%f",&R1);                           
	printf("\nEnter the value of R2\n\n");     
	scanf("%f",&R2);                            
	printf("\nEnter the value of R3\n\n");
	scanf("%f",&R3);
	printf("\nEnter the value of R4\n\n");
	scanf("%f",&R4);
    V2=calculate_V2(V1,R1,R2,R3,R4);  // passing the values in the functon and receiving the value of V2
    printf("\n\n*******************************************\n\n");
	printf("Value of V1 you entered %f\n\n",V1); //displaying all the entered values and the answer
	printf("Value of R1 you entered %f\n\n",R1);
	printf("Value of R2 you entered %f\n\n",R2);
	printf("Value of R3 you entered %f\n\n",R3);
	printf("Value of R4 you entered %f\n\n",R4);
	printf("\n\n***************Answer*************\n\n");
	printf("Value of V2 after the calculation %f\n\n",V2);
	
}
void header(void)
{
	printf("This is the header for the voltage calculation program\n\n");	
}
float calculate_V2(float V1,float R1, float R2, float R3, float R4)
{
	
	float V_1,R_1,R_2,R_3,R_4;   //V_1 holds the value of V1... R_1,R_2,R_3,R_4  holds the value of R1,R2,R3,R4 respectively
    V_1=V1; 
	R_1=R1;                       //Assigning values te the local variables
	R_2=R2;
	R_3=R3;
	R_4=R4;
	float V_2,R3_4,I_Total;
	R3_4= (R_3*R_4)/(R_3+R_4);      //R3_4 combine resistence of R3 & R4
	I_Total= V_1/(R_1+R_2+R3_4);   // I_Total is the total current in the circuit
	V_2=  I_Total*R3_4;          // V_2 final voltage to be calculated
	return V_2;                  // returning the final voltage to the main function
}



//****************************outputs*******************************




/**This is the header for the voltage calculation program


Enter the value of V1

5

Enter the value of R1

3

Enter the value of R2

2

Enter the value of R3

5

Enter the value of R4

7


*******************************************

Value of V1 you entered 5.000000

Value of R1 you entered 3.000000

Value of R2 you entered 2.000000

Value of R3 you entered 5.000000

Value of R4 you entered 7.000000



***************Answer*************

Value of V2 after the calculation 1.842105*/

//***********************************************************************************************
//output 2


/*This is the header for the voltage calculation program


Enter the value of V1

9

Enter the value of R1

7

Enter the value of R2

4

Enter the value of R3

2

Enter the value of R4

6


*******************************************

Value of V1 you entered 9.000000

Value of R1 you entered 7.000000

Value of R2 you entered 4.000000

Value of R3 you entered 2.000000

Value of R4 you entered 6.000000



***************Answer*************

Value of V2 after the calculation 1.080000
*/
