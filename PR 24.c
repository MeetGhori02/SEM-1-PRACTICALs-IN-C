//This program is written by 24CE034_MEET.

#include<stdio.h>

struct BookDetails
{
    char Title[35];
    char Author[50];
    int Amount;
};

void displayBookDetail(struct BookDetails Book)
{
    printf("\n\n___BOOK DETAILS___\n\n");
    printf("Book Title is : %s\n",Book.Title);
    printf("Author name is : %s\n",Book.Author);
    printf("Book Amount is : %d\n",Book.Amount);
}

int main()
{
    struct BookDetails Mybook;

    printf("Enter the title of the book : ");
    fgets(Mybook.Title,35,stdin);
    printf("Enter the Author name of the book : ");
    fgets(Mybook.Author,50,stdin);
    printf("Enter the Amount of the book : ");
    scanf("%d",&Mybook.Amount);

    displayBookDetail(Mybook);

    printf("\nMEET GHORI");
    printf("\nID : 24CE034");

    return 0;
}
//This program is written by 24CE034_MEET.

#include<stdio.h>

struct BookDetails
{
    char Title[35];
    char Author[50];
    int Amount;
};

void displayBookDetail(struct BookDetails Book)
{
    printf("\n\n___BOOK DETAILS___\n\n");
    printf("Book Title is : %s\n",Book.Title);
    printf("Author name is : %s\n",Book.Author);
    printf("Book Amount is : %d\n",Book.Amount);
}

int main()
{
    struct BookDetails Mybook;

    printf("Enter the title of the book : ");
    fgets(Mybook.Title,35,stdin);
    printf("Enter the Author name of the book : ");
    fgets(Mybook.Author,50,stdin);
    printf("Enter the Amount of the book : ");
    scanf("%d",&Mybook.Amount);

    displayBookDetail(Mybook);

    printf("\nMEET GHORI");
    printf("\nID : 24CE034");

    return 0;
}

