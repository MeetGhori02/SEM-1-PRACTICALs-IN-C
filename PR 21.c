//This program is written by 24CE034_MEET.

#include<stdio.h>
#include<math.h>

int Isvalid(float,float,float);
int Isvalid(float a,float b,float c)
{
    if(a+b>c && b+c>a && c+a>b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

float Areaoftriangle(float,float,float);
float Areaoftriangle(float a,float b,float c)
{
    float s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main()
{
    float p,q,r;

    printf("Enter the first side of triangle : ");
    scanf("%f",&p);
    printf("Enter the second side of triangle : ");
    scanf("%f",&q);
    printf("Enter the third side of triangle : ");
    scanf("%f",&r);

    if(Isvalid(p,q,r))
    {
        float Area=Areaoftriangle(p,q,r);
        printf("\nThe area of triangle is : %.2f\n",Area);
    }
    else
    {
        printf("Here these side of triangle is not valid\n");
    }


    printf("\nMEET GHORI");
    printf("\nID : 24CE034");

    return 0;
}

