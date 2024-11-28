//This program is written by 24CE034_MEET.

#include<stdio.h>
int main()
{
    int i,j,arr[100],n,swap;

    printf("Enter the no. of prices : ");
    scanf("%d",&n);

    printf("Enter %d Element : \n",n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i]>=arr[j])
            {
                swap=arr[i];
                arr[i]=arr[j];
                arr[j]=swap;
            }
        }
    }

    printf("Sorting price is : \n");
    for(i=0; i<n; i++)
    {
        printf("%d \n",arr[i]);
    }

    printf("\nMEET GHORI");
    printf("\nID : 24CE034");
    return 0;
}

