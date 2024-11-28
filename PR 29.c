//This program is written by 24CE034_MEET.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // Initial memory allocation using calloc
    char *str = (char *)calloc(50, sizeof(char));

    printf("Enter a string (max 50 characters): ");
    fgets(str, 50, stdin);  // Reading the string
    printf("Original string: %s\n", str);

    // Resize the memory block using realloc to store a larger string
    str = (char *)realloc(str, 100 * sizeof(char));

    // Resizing memory to 100 characters
    printf("Enter a larger string (max 100 characters): ");
    fgets(str, 100, stdin);
    printf("Modified string after realloc: %s\n", str);

    free(str);


    printf("\nMEET GHORI");
    printf("\nID : 24CE034");
    return 0;
}



