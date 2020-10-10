
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 1000
int main(void)
{
	int i;
	int j;
	int wordcount = 0, charcount = 0;
	FILE *fptr, *fptr1;
	int len, index, isUnique;
	
	char words[MAX][50];
	char temp[50];
	int t;
	char word[50];
	
	int count[MAX];

	fptr = fopen("file.txt", "r");

	if (fptr == NULL)
	{
		printf("Unable to open file. ");
		exit(1);
	}

	for (i = 0; i<MAX; i++)
		count[i] = 0;
	index = 0;
	while (fscanf(fptr, "%s", word) != EOF)
	{
		len = strlen(word);
		if (ispunct(word[len - 1]))
			word[len - 1] == ' ';
		for ( i = 0; i<len; i++)
		{
			if (word[i] >= 'A'&&word[i] <= 'Z')
			{
				word[i] = word[i] + 32;
			}
		}
	
		isUnique = 1;
		for (i = 0; i<index && isUnique; i++)
		{
			if (strcmp(words[i], word) == 0)
				isUnique = 0;
		}
	
		
		if (isUnique)
		{
			strcpy(words[index], word);
			count[index]++;
			index++;
		}
		else
		{
			count[i - 1]++;
		}
	}

	fclose(fptr);

	fptr1 = fopen("out.txt", "w");

	if (fptr1 == NULL)
	{
		printf("Unable to open file. ");
		exit(1);
	}
	for (i = 0; i < index - 1; i++)
	{
		for ( j = i + 1; j < index; j++)
		{
			if (strcmp(words[i], words[j]) > 0)
			{
				strcpy(temp, words[i]);
				strcpy(words[i], words[j]);
				strcpy(words[j], temp);
			
				t = count[i];
				count[i] = count[j];
				count[j] = t;
			}
		}
	}
	wordcount = index;
	for (i = 0; i<index; i++)
	{
		charcount = charcount + strlen(words[i]);
	}
	printf("Total words=%d", wordcount);
	printf(" Total character=%d", charcount);
	for (i = 0; i<index; i++)
	{
		fprintf(fptr1, "%-15s => %d ", words[i], count[i]);
	}
	return 0;
}


