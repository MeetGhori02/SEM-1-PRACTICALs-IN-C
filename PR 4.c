//This program is written by 24CE034_MEET.
#include<stdio.h>
int main()
{
    long long int T=1441981744,TL,MC,FC,MLC,FLC,ILF,ILM;

    TL=85.95/100;
    double LOM=80.95/100;
    double LOF=62.84/100;


    MC=(1-0.484)*T;      // Male count
    FC=0.484*T;            // Female count
    MLC=LOM* MC;     // Male literacy count
    FLC=LOF*FC;             // Female literacy count
    ILM=MC-MLC;          // Illiteracy male
    ILF=FC-FLC; // Illiteracy female


    printf("The number of Men Ilitracycount of : %d \n",ILM);
    printf("The number of  of Female Ilitracycount of : %d \n",ILF);

    printf("\nMEET GHORI");
    printf("\nID : 24CE034");
    return 0;
}

