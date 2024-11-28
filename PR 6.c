//This program is written by 24CE034_MEET.
#include<stdio.h>
int main()
{
    int Fn,Sn;

    printf("Enter the first number : ");
    scanf("%d",&Fn);
    printf("Enter the first number :  ");
    scanf("%d",&Sn);

    int add=Fn+Sn;
    int subtraction=Fn-Sn;
    int multiplies=Fn*Sn;
    int division=Fn/Sn;

    printf("The addition of  %d  and %d  is: %d \n",Fn,Sn,add);
    printf("The subtraction of  %d  and %d is: %d \n",Fn,Sn,subtraction);
    printf("The multiplication of  %d and %d  is: %d \n",Fn,Sn,multiplies);
    printf("The division of %d and %d is: %d \n",Fn,Sn,division);

    printf("\nMEET GHORI");
    printf("\nID : 24CE034");
    return 0;
}

