//program to fill an array of 10 elements with multiples of 5
#include<stdio.h>
int main()
{
    int arr[10]={5},i,arr2[10]={0};



    for(i=0;i<10;i++)
    {
        arr[i]=arr[i-1]+5;
    }

    for(i=0;i<10;i++)
    {
        arr2[i]=arr[i];
        printf("\t%d",arr2[i]);
    }
}
