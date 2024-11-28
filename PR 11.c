//This program is written by 24CE034_MEET.
#include<stdio.h>
int main()
{

    int MS=21,US,CS;
    printf("\t[WELCOME TO MATCHSTICK GAME]\t ");
    printf("\nHERE TOTAL MATCHSTICK IS 21\n");

    printf("RULES :\n");
    printf("1.The game starts with 21 matchsticks.\n");
    printf("2.The user is asked to pick 1, 2, 3, or 4 matchsticks.\n");
    printf("3.After the user picks, the computer makes its pick.\n");
    printf("4.The player who is forced to pick the last matchstick loses the game.\n");

    while(MS>1)
    {
        printf("Enter your matchsticks:");
        scanf("%d",&US);
        if(US<1||US>4)
        {
            printf("invalid value.\n");
            continue;
        }
        printf("you picked %d mathcsticks.\n",US);

        CS=5-US;
        printf("computer picked %d matchsticks.\n",CS);

        MS=MS-CS-US;
        printf("%d matchtsicks available.\n",MS);

        printf("\n");

        if(MS==1)
        {
            printf("You are forced to pick the last matchstick .\n");
            printf("YOU LOSE !!!!!!!");
            break;
        }

    }

    printf("\nMEET GHORI");
    printf("\nID : 24CE034");
    return 0;
}

