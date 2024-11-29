//This program is written by 24CE034_MEET.

#include <stdio.h>
#include <string.h>

union Library
{
    int accessionNumber;
    char title[50];
    char author[50];
    int price;
    int flag; // 1 if issued, 0 otherwise
};

int main()
{
    union Library book;

    printf("Enter the accession number of the book: ");
    scanf("%d", &book.accessionNumber);
    printf("Accession Number: %d\n", book.accessionNumber);

    getchar();

    printf("Enter the title of the book: ");
    fgets(book.title, 50, stdin);
    printf("Title: %s", book.title);


    printf("Enter the author name of the book: ");
    fgets(book.author, 50, stdin);
    printf("Author: %s", book.author);

    printf("Enter the price of the book: ");
    scanf("%d", &book.price);
    printf("Price: %d\n", book.price);

    printf("Enter the flag (1 if issued, 0 if not issued): ");
    scanf("%d", &book.flag);
    printf("Issued: %s\n", (book.flag == 1) ? "Yes" : "No");

    
    printf("\nMEET GHORI");
    printf("\nID : 24CE034");
    return 0;
}

