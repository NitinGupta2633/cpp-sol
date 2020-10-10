#include <stdio.h> 
#include <conio.h>

int main(void)
{
int a = 3,b = 6,c;

c = (a << 1) & b;
printf("c = %d",c);
c = (a|b)^(b>>2);
printf("\nc=%d",c); getch(); return(0);
}

