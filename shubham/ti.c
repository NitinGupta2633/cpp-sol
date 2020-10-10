#include<stdio.h>
struct STRUCTURE
{
int aa;
double bb;
char ff[30]; 
};
union Group
{
char bb[50]; 
int aa[10]; 
};
int main()
{

struct STRUCTURE yy;
union Group zz;
int size;
int x;
char y;
double a;
size=sizeof(x);
printf("%d",size);
size=sizeof(y);
printf("%d",size);
size=sizeof(a);
printf("%d",size);

size=sizeof(zz);
printf("%d",size);
size=sizeof(yy);
printf("size of str=%d",size);
}


 


