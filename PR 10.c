// This program is written by 24CE034_MEET.
#include <stdio.h>
int main()
{
    int Time, i;
    printf("Enter your time :");
    scanf("%d", &Time);

    printf("Your countdown started : \n");
    for (i = Time; i >= 0; i--)
    {
        printf("%d \n", i);
        sleep(1);
    }
    printf("Your countdown completed.\n");

    printf("\nMEET GHORI");
    printf("\nID : 24CE034");
    return 0;
}

