#include<stdio.h>

void Balanceswaping(int*, int*);

void Balanceswaping(int* F, int* S)
{
    int temp;
    temp=*F;
    *F=*S;
    *S=temp;
}

int main()
{
    long int first_person,second_person;
    int *FP,*SP;

    printf("Enter the balance of first person:");
    scanf("%ld",&first_person);
    printf("Enter the balance of second person:");
    scanf("%ld",&second_person);

    FP = &first_person;
    SP = &second_person;

    Balanceswaping(FP,SP);
    printf("\n\nAfter the transaction\n\n");
    printf("First person balance : %ld\n",first_person);
    printf("Second person balance : %ld\n",second_person);
}



