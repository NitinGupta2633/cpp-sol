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

	FILE *infile;

	ifstream inFile; 

	int n;

	char x[100],y;



	infile = fopen("E:\\Bank.txt","w");

	cout<<"\nEnter the characters/string to write in the file: "; scanf("%[^\n]",&x);	

	for(n=0;n<strlen(x);n++)	fprintf(infile,"%c",x[n]);

	fclose(infile);



	cout<<"\n\nContents read from E:\Bank.txt file...\n";

	inFile.open("E:\\Bank.txt"); 

  if (!inFile) {

  	

    cout << "Unable to open file";

    exit(1); // terminate with error

  }

  while(inFile >> y) 

	{

		cout<<y;

	}	

	fclose(infile);

}
