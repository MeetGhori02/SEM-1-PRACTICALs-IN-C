//This program is written by 24CE034_MEET.

#include<stdio.h>
int main()
{
    int a[25],positive=0,negative=0,even=0,odd=0,i;
    printf("Enter 25 elements : \n");
    for(i=0; i<25; i++)

    {
        scanf("%d",&a[i]);

        if(a[i]>=0)
            positive++;
        else
            negative++;
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }

    printf("Positive no: %d \n",positive);
    printf("Negative no: %d \n",negative);
    printf("Even no: %d \n",even);
    printf("Odd no: %d \n",odd);



    printf("\nMEET GHORI");
    printf("\nID : 24CE034");
    return 0;
}


