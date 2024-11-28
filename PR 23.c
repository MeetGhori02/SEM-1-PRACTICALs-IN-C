// Fibonacci series = 0,1,1,2,3,5,8,...  n term = (n-1)+(n-2) .

#include <stdio.h>
int fibonacci(int );
int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int terms;
    printf("Enter the no. of term : ");
    scanf("%d", &terms);
    printf("First %d terms of the fibonacci series is : ",terms);

    for (int i = 0; i < terms; i++)
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}

