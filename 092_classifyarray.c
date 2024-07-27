//program to fill an array with random elements and print even, odd, prime numbers separately
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main()
{
    int arr[10],i,d=2;
    char isprime='y';

    srand(time(0));
    for(i=0;i<10;i++)
    {
        arr[i]=rand()%1000;
    }
    printf("\nEven Numbers\n");

    for(i=0;i<10;i++)
    {

        if(arr[i]%2==0)
        {
            printf("\n%d",arr[i]);
        }
    }
    printf("\n\nOdd Numbers\n");
    for(i=0;i<10;i++)
    {

        if(arr[i]%2!=0)
        {
            printf("\n%d",arr[i]);
        }

    }
    printf("\nPrime Numbers\n");
    for(i=0;i<10;i++)
    {
        isprime='y';
        for(d=2;d<=(sqrt(arr[i]));d++)
        {
            if(arr[i]%d==0)
            {
                isprime='n';
                break;
            }
        }
        if(isprime=='y')
        printf("\n%d",arr[i]);
    }

}
