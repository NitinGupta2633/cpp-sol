
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
  
struct inventory 
{ 
	char item_name[20]; 
    float price; 
    int Qty; 
}; 
  
int main () 
{ 
    FILE *outfile; 
    struct inventory input;
      
    outfile = fopen ("inventory.txt", "w"); 
    if (outfile == NULL) 
    { 
        fprintf(stderr, "\nError opend file\n"); 
        exit (1); 
    } 
  
    struct inventory item1 = {"aaa", 123.55, 10}; 
    struct inventory item2 = {"bbb", 222.90, 23}; 
    struct inventory item3=	 {"ccc",530.45,50};
	
      
  
    fwrite (&item1, sizeof(struct inventory), 1, outfile); 
    fwrite (&item2, sizeof(struct inventory), 1, outfile); 
    fwrite (&item3, sizeof(struct inventory), 1, outfile); 
    if(fwrite != 0)  
        printf("contents to file written successfully !\n"); 
    else 
        {
		printf("error writing file !\n"); 
}
  
    fclose (outfile); 
    
    outfile = fopen ("inventory.txt", "r"); 
    if (outfile == NULL) 
    { 
        fprintf(stderr, "\nError opening file\n"); 
        exit (1); 
    } 
      printf("Item-name			price			Qty			price	\n");
    while(fread(&input, sizeof(struct inventory), 1, outfile)) 
        printf ("%s			  	%.2f 	        	%d			%.2f\n", input.item_name, 
        input.price, input.Qty,	input.price*input.Qty); 
  
  
    fclose (outfile); 
  
    return 0; 
  
    return 0; 
} 
