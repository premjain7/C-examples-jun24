//program to fill an array with random numbers and arrange them in ascending and descending order
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int arr[10],i,j,big=0;
    srand(time(0));

    for(i=0;i<10;i++)
    {
        arr[i]=rand()%1000;
        printf("\t%d",arr[i]);
    }

    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(arr[i]>arr[j])
            {
                big=arr[i];
                arr[i]=arr[j];
                arr[j]=big;
            }
        }


    }
    printf("\nSorted Elements Are\n");

        for(i=0;i<10;i++)
        {
            printf("\t%d",arr[i]);
        }
    printf("\n");
}
