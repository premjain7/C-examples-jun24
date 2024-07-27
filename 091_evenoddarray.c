//program to fill an array with 10 even numbers ant odd index and odd numbers at even index
#include<stdio.h>
int main()
{
    int arr[10]={0},i;
    for(i=0;i<10;i++)
    {
        if(i%2==0)
           arr[i]=i+1;
        else
           arr[i]=i+1;
    }

    for(i=0;i<10;i++)
    {
        printf("\n%d",arr[i]);
    }
}
