//This program is written by 24CE034_MEET.

#include <stdio.h>
int main()
{
    FILE *file;
    int mark;

    file = fopen("marks.txt", "w");
    if (file == NULL)
    {
        printf("SORRY! marks.txt file is not available.....\n");
        return 1;
    }

    printf("Enter 5 student marks: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Student %d : ", i + 1);
        scanf("%d", &mark);
        putw(mark, file);
    }
    printf("Marks successfully written in file.\n");

    fclose(file);

    file = fopen("marks.txt", "r");
    if (file == NULL)
    {
        printf("SORRY! marks.txt file is not available.....\n");
        return 1;
    }

    printf("\nStudent marks read from the file: \n");
    for (int i = 0; i < 5; i++)
    {
        mark = getw(file);
        printf("Student %d : %d\n", i + 1, mark);
    }

    fclose(file);

    printf("\nMEET GHORI");
    printf("\nID : 24CE034");
    return 0;
}


