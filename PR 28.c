#include<stdio.h>

void pr(int*);

void pr(int* M)
{

    int distinction=0,fc=0,pass=0,fail=0;

    for (int i=0; i<10; i++)
    {
        if(M[i]>=70)
        {
            (distinction)++;
        }
        else if(M[i]<69 && M[i]>=60)
        {
            (fc)++;
        }
        else if(M[i]<59 && M[i]>=40)
        {
            (pass)++;
        }
        else if(M[i]<40)
        {
            (fail)++;
        }

    }
    printf("The result is :\n");
    printf(" DISTINCTION : %d",distinction);
    printf(" FIRST CLASS : %d",fc);
    printf(" PASS : %d",pass);
    printf(" FAIL : %d",fail);
}


int main()
{

    int marks[10],i;
    int* M;

    printf("Enter 10 students marks : \n");
    for (i=0; i<10; i++)
    {
        scanf("%d",&M[i]);
    }
    pr(M);

    return 0;
}

