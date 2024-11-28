//This program is written by 24CE034_MEET.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseWord(char *word)
{
    int length = strlen(word);
    for (int i = 0; i < length / 2; i++)
    {
        char temp = word[i];
        word[i] = word[length - 1 - i];
        word[length - 1 - i] = temp;
    }
}

int main()
{
    FILE *file;
    char word[100];

    file = fopen("Demo.txt", "r");
    if (file == NULL)
    {
        printf("SORRY! Demo.txt file is not available.....\n");
        return 1;
    }

    printf("Reversed Words:\n");
    while (fscanf(file, "%s", word) != EOF)
    {
        reverseWord(word);
        printf("%s ", word);
    }
    printf("\n");

    fclose(file);


    printf("\nMEET GHORI");
    printf("\nID : 24CE034");
    return 0;
}
