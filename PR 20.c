// This program is written by 24CE034_MEET.

#include <stdio.h>
void displayWelcomeMessage()
{
    printf("WELCOME TO CHARUSAT UNIVERSITY\n");
    printf("------------------------------\n\n");
}

int getNumberOfStudents()
{
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    return numStudents;
}

void collectAndDisplayGrades(int numStudents, int grades[])
{
    printf("\nEnter the grades for %d students:\n", numStudents);
    for (int i = 0; i < numStudents; i++)
    {
        printf("Enter the grade for student %d: ", i + 1);
        scanf("%d", &grades[i]);
        printf("Student %d : Grade = %d",i+1,grades[i]);
    }

    printf("\nGrades of students:\n");
    for (int i = 0; i < numStudents; i++)
    {
        printf("Enter the grade for student %d (for average calculation): %d\n", i + 1, grades[i]);
    }
}

float calculateAverageGrade(int numStudents, int grades[])
{
    int sum = 0;
    for (int i = 0; i < numStudents; i++)
    {
        sum += grades[i];
    }
    return (float)sum / numStudents;
}

int main()
{
    int grades[100];

    displayWelcomeMessage();

    int numStudents = getNumberOfStudents();

    collectAndDisplayGrades(numStudents, grades);

    float averageGrade = calculateAverageGrade(numStudents, grades);
    printf("\nThe average grade of the students is: %.2f\n", averageGrade);

    printf("\nMEET GHORI");
    printf("\nID : 24CE034");
    return 0;
}



