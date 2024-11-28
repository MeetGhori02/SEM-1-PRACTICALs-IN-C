//This program is written by 24CE034_MEET.

#include<stdio.h>
int main()
{
    int Horizontal,Vertical,i,j;
    printf("Enter your Horizontal value:");
    scanf("%d",&Horizontal);
    printf("Enter your Vertical value:");
    scanf("%d",&Vertical);

    for(i=1; i<=Horizontal; i++)
    {
        for(j=1; j<=Vertical; j++)
        {
            printf("%d\t",i*j);
        }
        printf("\n");
    }


    printf("\nMEET GHORI");
    printf("\nID : 24CE034");
    return 0;
}

