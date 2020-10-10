#include <stdio.h> #include <conio.h>

int main(void)
{
int numbers[5]={1,3,5,7,9}; char course[]="PRG255";

printf("%d",*(numbers+2)); printf("\n%d",*numbers+1); printf("\n%c",*course); printf("\n%c",*(course+3)); getch();
return(0);
}


