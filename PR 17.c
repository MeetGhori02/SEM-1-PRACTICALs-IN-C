// This program is written by 24CE034_MEET.

#include <stdio.h>
#define MaxRows 10
#define MaxSeatsPerRow 10
int main()
{
    char seatingChart[MaxRows][MaxSeatsPerRow];
    int numReservedSeats, i, j;
    for (i = 0; i < MaxRows; i++)
    {
        for (j = 0; j < MaxSeatsPerRow; j++)
        {
            seatingChart[i][j] = '0';
        }
    }
    printf("Enter the number of reserved seats: ");
    scanf("%d", &numReservedSeats);
    for (i = 1; i <= numReservedSeats; i++)
    {
        int row, seat;
        printf("Enter row and seat number for reserved seat %d (e.g., 2 5): ", i);
        scanf("%d %d", &row, &seat);
        if (row >= 1 && row <= MaxRows && seat >= 1 && seat <= MaxSeatsPerRow)
        {
            seatingChart[row - 1][seat - 1] = 'X';
        }
        else
        {
            printf("Invalid row or seat number.\n");
            i--;
        }
    }
    printf("\nSeating Chart:\n");
    for (i = 0; i < MaxRows; i++)
    {
        printf("Row %d:", i + 1);
        for (j = 0; j < MaxSeatsPerRow; j++)
        {
            printf(" %c", seatingChart[i][j]);
        }
        printf("\n");
    }


    printf("\nMEET GHORI");
    printf("\nID : 24CE034");
    return 0;
}

