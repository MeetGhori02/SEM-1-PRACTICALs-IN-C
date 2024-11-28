//This program is written by 24CE034_MEET.

#include<stdio.h>
int main()
{
    int Bill=0,choice;
    printf(" WELCOME    TO    MG    FOODIES  \n");
    printf("for Burger=1 \n");
    printf("for Pizza=2 \n");
    printf("for Pasta=3 \n");
    printf("for Sandwitch=4 \n");
    printf("for FF=5 \n");
    printf("for Bill=0 \n");


    do
    {
        printf("ente your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("you ordered Burger.\n");
            Bill+=150;

            break;
        case 2:
            printf("you ordered Pizza.\n");
            Bill+=200;

            break;
        case 3:
            printf("you ordered Pasta.\n");
            Bill+=250;
            break;

        case 4:
            printf("you ordered Sandwitch.\n");
            Bill+=100;
            break;

        case 5:
            printf("you ordered French Fry.\n");
            Bill+=50;
            break;

        case 0:
            printf("Total bill  = %d ",Bill);


        }
    }
    while(choice!=0 );
    printf("\n THANKS FOR VISITING !!!!\n");


    printf("\nMEET GHORI");
    printf("\nID : 24CE034");
    return 0;
}

