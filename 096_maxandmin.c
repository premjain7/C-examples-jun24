//program to find max and min number in an array
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    srand(time(0));
    int arr[10],i,j,temp;
    for(i=0;i<10;i++)
    {
        arr[i]=rand()%1000;
    }

    for(i=0;i<10;i++)
    {
        printf("\n%d",arr[i]);
    }

    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }



        printf("\n\nBiggest Number Is...%d",arr[0]);
        printf("\nSmallest Number Is...%d",arr[9]);


}


