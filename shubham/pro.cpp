#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include<iostream>
#define MAX 1000

int main()

{
    int wordcount = 0, charcount = 0;
    FILE *fptr, *fptr1;
    int i, len, index, isUnique;
    // List of distinct words
    char words[MAX][50];
    char temp[50];
    int t;
    char word[50];
    // Count of distinct words
    int count[MAX];
    /* Try to open file */
    fptr = fopen("input.txt", "r");
    /* Exit if file not opened successfully */
    if (fptr == NULL)
    {
        printf("Unable to open file. \n");
        exit(1);
    }
    // Initialize words count to 0
    for (i = 0; i < MAX; i++)
        count[i] = 0;
    index = 0;
    while (fscanf(fptr, "%s", word) != EOF)
    {
        len = strlen(word);
        if (ispunct(word[len - 1]))
            word[len - 1] = '\0';
        for (int i = 0; i < len; i++)
        {
            if (word[i] >= 'A' && word[i] <= 'Z')
            {
                word[i] = word[i] + 32;
            }
        }
        // Check if word exits in list of all distinct words
        isUnique = 1;
        for (i = 0; i < index && isUnique; i++)
        {
            if (strcmp(words[i], word) == 0)
                isUnique = 0;
        }
        // If word is unique then add it to distinct words list and increment index. Otherwise increment occurrence
        // count of current word.
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
    // Close file
    fclose(fptr);
    /* Try to open file */
    fptr1 = fopen("out.txt", "w");
    /* Exit if file not opened successfully */
    if (fptr1 == NULL)
    {
        printf("Unable to open file. \n");
        exit(1);
    }
    for (i = 0; i < index - 1; i++)
    {
        for (int j = i + 1; j < index; j++)
        {
            if (strcmp(words[i], words[j]) > 0)
            {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
                //swap the count also
                t = count[i];
                count[i] = count[j];
                count[j] = t;
            }
        }
    }
    wordcount = index;
    for (int i = 0; i < index; i++)
    {
        charcount = charcount + strlen(words[i]);
    }
    printf("Total words=%d", wordcount);
    printf(" Total character=%d", charcount);
    for (i = 0; i < index; i++)
    {
        fprintf(fptr1, "%-15s => %d \n", words[i], count[i]);
    }
    return 0;
}
