#include <stdio.h>
#include<string.h>

int main()
{
 FILE *f;
 char file_name[100];
 char ch;
 int linecount=0, wordcount=0, charcount=0;


 
    // Open file in read-only mode
   f = fopen("input.txt","r");

   
   if ( f )
   {
	
	   while ((ch=getc(f)) != EOF) {
	   	  
		    if (ch != ' ' && ch != '\n')
			 {
			  charcount++; 
			  }
		  
		 
		   if (ch == ' ' || ch == '\n')
		    { 
			wordcount++;
			 }
		   
		   if (ch == '\n')
		    {
			 linecount++; 
			 }
		   


	   }

	   if (charcount > 0) {
		linecount++;
		wordcount++;
	   }
    }
   else
      {
         printf("Failed to open file\n");
        }

    printf("Lines : %d \n", linecount);
    printf("Words : %d \n", wordcount);
    printf("Characters : %d \n", charcount);

getchar();
return(0);
}
