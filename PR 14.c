(i)
//This program is written by 24CE034_MEET.

#include <stdio.h>
int main()
{
    int n = 5;
    int i,j;

    for(i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j % 2);
        }
        printf("\n");
    }

    printf("\nMEET GHORI");
    printf("\nID : 24CE034");
    return 0;
}

(ii)
//This program is written by 24CE034_MEET.

int main()
{
    int n=5,i,j,k;
    for(i=1; i<=n; i++)
    {
        for(j=n-1; j>=i; j--)
        {
            printf("  ");
        }
        for(k=1; k<=i; k++)
        {
            printf(" %d",k);
        }
        printf("\n");
    }

    printf("\nMEET GHORI");
    printf("\nID : 24CE034");
    return 0;
}

(iii)
//This program is written by 24CE034_MEET.


#include<stdio.h>
int main()
{
    for(int i=1; i<=4; i++)
    {
        for(int j=4; j>=1; j--)
        {
            if(j>i)printf("  ");
        }
        for(int j=1; j<=4; j++)
        {
            if(i>=j)printf("%c ",j+64);
        }
        for(int j=4; j>=1; j--)
        {
            if(i>=2)
            {
                if(i>j)printf("%c ",j+64);
            }
        }
        printf("\n");
    }


    printf("\nMEET GHORI");
    printf("\nID : 24CE034");
    return 0;
}


