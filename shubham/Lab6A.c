#include <stdio.h>  
#include <string.h>  
   
int main()  
{  
    char string[] = "The best of both  worlds";  
    int i=0,count = 0;  
      
    //Counts each character except space  
    for( i = 0;string[i]!=NULL; i++) 
	{  
        if(string[i] != ' ')  
    {
			       count++;  
    }  }
      
    //Displays the total number of characters present in the given string  
    printf("Total number of characters in a string: %d", count);  
   
    return 0;  
}  
