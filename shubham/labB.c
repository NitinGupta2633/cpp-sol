#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <cmath>
#include<string.h>
#include <stdlib.h> 
#include<time.h>
#include <fstream> 
#include<list> 
#include <iomanip>  
using namespace std;
main(void)
{

	FILE *fpt,*fpt1;

	float Price, Qty,Val;

	char Item[5],n;

	fpt = fopen("E:\\inventory.txt","w");

	

	sprintf(Item,"aaa"); Price = 123.55;	Qty = 10;

	fprintf(fpt,"%s %f %f\n",Item,Price,Qty);

	

	sprintf(Item,"bbb"); Price = 222.90;	Qty = 23;

	fprintf(fpt,"%s %f %f\n",Item,Price,Qty);



	sprintf(Item,"ccc"); Price = 530.45;	Qty = 50;

	fprintf(fpt,"%s %f %f\n",Item,Price,Qty);

	fclose(fpt); 



	fpt1 = fopen("E:\\inventory.txt","r");

	cout<<"\nItem  Qty.   Price   VAl.";

	for(n=0;n<3;n++)

	{

		fscanf(fpt1,"%s %f %f",&Item,&Price,&Qty);

		Val = Price*Qty;

		cout<<"\n"<<Item<<"\t"<<Qty<<"\t"<<Price<<"\t"<<Val;

	}

	fclose(fpt1);

	return(0);

}
