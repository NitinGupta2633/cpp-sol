#include <stdio.h>
#include<string.h>
int main()
{
    int size=100;
    char data[size];
    char c;
    FILE * fPtr;
    fPtr = fopen("file1.txt", "w");
    if(fPtr == NULL)
    {
        printf("Unable to create file.\n");
        exit(1);
    }
    printf("Enter contents to store in file : \n");
    fgets(data, size, stdin);
    fputs(data, fPtr);
    fclose(fPtr);
    printf("File created and saved successfully. :)\n\n \n");
printf("The content in the loaded file are as follows:\n\n");
fPtr = fopen("file1.txt", "r"); 
        while ((c = getc(fPtr)) != EOF)
		{
		  printf("%c", c);
}
        fclose(fPtr);
        return 0;

    return 0;
}
