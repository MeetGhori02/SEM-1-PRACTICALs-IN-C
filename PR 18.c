// This program is written by 24CE034_MEET.

#include <stdio.h>
#include <string.h>
#define MaxStudents 5
#define MaxNameLength 50
int main()
{
    char names[MaxStudents][MaxNameLength];
    char temp[MaxNameLength];
    int i, j;
    printf("Enter the names of 5 students:\n");
    for (i = 0; i < MaxStudents; i++)
    {
        scanf("%s", names[i]);
    }
    for (i = 0; i < MaxStudents - 1; i++)
    {
        for (j = 0; j < MaxStudents - i - 1; j++)
        {
            if (strcmp(names[j], names[j + 1]) > 0)
            {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j +1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
    printf("\nSorted names:\n");
    for (i = 0; i < MaxStudents; i++)
    {
        printf("%s\n", names[i]);
    }


    printf("\nMEET GHORI");
    printf("\nID : 24CE034");
    return 0;
}

