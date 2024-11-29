//This program is written by 24CE034_MEET.

#include <stdio.h>
#include <string.h>

struct Coach
{
    char name[50];
    int age;
    char experience[20];
};

struct Team
{
    char team_name[50];
    char sport_type[30];
    struct Coach coach;
};

struct Team Teams[100];
int TC = 0;              //Team Count

void addTeam()
{
    printf("Enter the team name: ");
    gets(Teams[TC].team_name);

    printf("Enter the sport type (e.g., Basketball, Football): ");
    gets(Teams[TC].sport_type);

    printf("Enter the coach's name: ");
    gets(Teams[TC].coach.name);

    printf("Enter the coach's age: ");
    scanf("%d", &Teams[TC].coach.age);
    getchar();

    printf("Enter the coach's years of experience: ");
    gets(Teams[TC].coach.experience);

    TC++;
    puts("Team added successfully!");
}

void searchTeam()
{
    char search_name[50];
    printf("Enter the team name to search: ");
    gets(search_name);

    for (int i = 0; i < TC; i++)
    {
        if (strcmp(Teams[i].team_name, search_name) == 0)
        {
            puts("\nTeam Found:");
            printf("Team Name: ");
            puts(Teams[i].team_name);
            printf("Sport Type: ");
            puts(Teams[i].sport_type);
            printf("Coach Name: ");
            puts(Teams[i].coach.name);
            printf("Coach Age: %d\n", Teams[i].coach.age);
            printf("Coach Experience: ");
            puts(Teams[i].coach.experience);
            return;
        }
    }
    puts("Team not found!");
}

void displayTeams()
{
    if (TC == 0)
    {
        puts("No Teams to display.");
        return;
    }

    for (int i = 0; i < TC; i++)
    {
        puts("\nTeam Details:");
        printf("Team Name: ");
        puts(Teams[i].team_name);
        printf("Sport Type: ");
        puts(Teams[i].sport_type);
        printf("Coach Name: ");
        puts(Teams[i].coach.name);
        printf("Coach Age: %d\n", Teams[i].coach.age);
        printf("Coach Experience: ");
        puts(Teams[i].coach.experience);
    }
}

int main()
{
    int choice;

    do
    {
        puts("\nSports Team Management System");
        puts("1. Add Team");
        puts("2. Search Team");
        puts("3. Display All Teams");
        puts("4. Exit");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
        case 1:
            addTeam();
            break;
        case 2:
            searchTeam();
            break;
        case 3:
            displayTeams();
            break;
        case 4:
            puts("Exiting the program. Goodbye!");
            break;
        default:
            puts("Invalid choice. Please try again.");
        }
    }
    while (choice != 4);


    printf("\nMEET GHORI");
    printf("\nID : 24CE034");
    return 0;
}11


