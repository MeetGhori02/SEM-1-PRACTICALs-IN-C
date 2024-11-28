//This program is written by 24CE034_MEET.

#include<stdio.h>

int Total(int M[], int n);
int Average(int M[], int n);
int High(int M[], int n);
int Low(int M[], int n);

int Total(int M[],int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum=sum+M[i];
    }
    return sum;
}

int Average(int M[],int n)
{
    int TOTAL = Total(M,n);
    int avr=TOTAL/n;
    return avr;
}

int High(int M[],int n)
{
    int high=M[0];
    for(int i=0; i<n; i++)
    {
        if(M[i]>high)
        {
            high=M[i];
        }
    }
    return high;

}
int low(int M[],int n)
{
    int low=M[0];
    for(int i=0; i<n; i++)
    {
        if(M[i]<low)
        {
            low=M[i];
        }
    }
    return low;
}

int main()
{
    int M[25],i,n;
    printf("Enter the no of student : ");
    scanf("%d",&n);
    printf("Enter the ccp marks of student\n");
    for(i=0; i<n; i++)
    {
        printf("STUDENT %d : ",i+1);
        scanf("%d",&M[i]);
    }
    int TOTAL=Total(M,n);
    printf("The sum of given marks is : %d \n",TOTAL);

    float AVR=Average(M,n);
    printf("The average of given marks is : %.2f\n",AVR);

    int HIGH=High(M,n);
    printf("The highest marks is : %d\n",HIGH);

    int LOW=low(M,n);
    printf("The lowest marks is : %d\n",LOW);


    printf("\nMEET GHORI");
    printf("\nID : 24CE034");

    return 0;
}

