//This program is written by 24CE034_MEET.

int main()
{
    long int RB,RP,RC,SA,SH,SC,RT,ST;
    RB=12000000;
    RP=6000000;
    RC=3000000;
    SA=11000000;
    SH=8000000;
    SC=8000000;

    RT=RB+RP+RC;
    ST=SA+SH+SC;

    printf("The wealth of raman is : %d\n",RT);
    printf("The wealt of suman is : %d\n",ST);

  if (RT>ST)
  {
      printf("Raman wealth is greater then Suman.\n" );
  }

   else if (ST>RT)
   {
       printf("Suman wealth is greater then Raman.\n");
   }

   else
   {
       printf("Raman wealth and Suman wealth are same.\n");
   }

   printf("\nMEET GHORI");
   printf("\nID : 24CE034");

    return 0;
}

