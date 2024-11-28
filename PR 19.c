//This program is written by 24CE034_MEET.

#include <stdio.h>

int stringLength(char *str)
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

void stringReverse(char *str)
{
    int length = stringLength(str);
    for (int i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int stringCompare(char *str1, char *str2)
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            return str1[i] - str2[i];
        }
        i++;
    }
    return str1[i] - str2[i];
}

void stringCopy(char *str1, char *str2)
{
    int i = 0;
    while (str2[i] != '\0')
    {
        str1[i] = str2[i];
        i++;
    }
    str1[i] = '\0';
}

void stringConcat(char *str1, char *str2)
{
    int str1Length = stringLength(str1);
    int i = 0;
    while (str2[i] != '\0')
    {
        str1[str1Length + i] = str2[i];
        i++;
    }
    str1[str1Length + i] = '\0';
}

int main()
{
    char note1[1000], note2[1000];
    char tempNote[1000];
    int choice;

    puts("......Welcome to the Simple Note-Taking Program......");
    puts("Enter your first note: ");
    gets(note1);  // Using gets() for input

    do
    {
        puts("\nChoose an operation to perform:");
        puts("1. Calculate the length of the note");
        puts("2. Reverse the note");
        puts("3. Compare the note with another note");
        puts("4. Copy the note to another note");
        puts("5. Concatenate another note to the current note");
        puts("6. Exit");
        puts("Enter your choice: ");
        scanf("%d", &choice);  // Using scanf() for reading integer input
        getchar();  // To consume the newline character left by scanf()

        switch (choice)
        {
        case 1:
            printf("The length of the note is: %d\n", stringLength(note1));
            break;

        case 2:
            stringCopy(tempNote, note1);
            stringReverse(tempNote);
            printf("The reversed note is: ");
            puts(tempNote);  // Using puts() to display the reversed note
            break;

        case 3:
            puts("Enter another note to compare: ");
            gets(note2);  // Using gets() for input
            int cmpResult = stringCompare(note1, note2);
            if (cmpResult == 0)
            {
                puts("The notes are identical.");
            }
            else if (cmpResult > 0)
            {
                puts("The first note is greater.");
            }
            else
            {
                puts("The second note is greater.");
            }
            break;

        case 4:
            stringCopy(note2, note1);
            printf("The note has been copied. The copied note is: ");
            puts(note2);
            break;

        case 5:
            puts("Enter another note to concatenate: ");
            gets(note2);  // Using gets() for input
            stringConcat(note1, note2);
            printf("The concatenated note is: ");
            puts(note1);
            break;

        case 6:
            puts("Exiting the application. Goodbye!");
            break;

        default:
            puts("Invalid choice! Please try again.");
            break;
        }
    }
    while (choice != 6);


    printf("\nMEET GHORI");
    printf("\nID : 24CE034");
    return 0;
}
