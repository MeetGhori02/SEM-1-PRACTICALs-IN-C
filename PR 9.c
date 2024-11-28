//This program is written by 24CE034_MEET.

#include<stdio.h>
int main()
{
    char grade;
    int marks;

    printf("Enter your marks : ");
    scanf("%d",&marks);

    if(marks<0 || marks >100)
    {
        printf("Invalid marks. Marks should be between 0 to 100.");
    }

    else
    {
        grade =(marks>=90)?'A':(marks>=80 && marks < 90)?'B':(marks>=70 &&  marks < 80)?'C':(marks>=60 && marks<70)?'D':'F';
        printf("The student's Grade is : %c\n",grade);
    }

    printf("\nMEET GHORI");
    printf("\nID : 24CE034");
    return 0;
}

