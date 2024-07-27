//program to find a number in array of 10 elements
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int arr[10],i,no;
    char x='y';
    srand(time(0));

    for(i=0;i<10;i++)
    {
        arr[i]=rand()%1000;
        printf("\n%d",arr[i]);
    }

    printf("\nWhich Number You Want To Search For...:");
    scanf("%d",&no);

    for(i=0;i<10;i++)
    {
        if(no==arr[i])
        {
            x='n';
            break;
        }

    }

    if(x=='n')
    {
        printf("\nNumber Is Found");
    }
    else
        printf("\nNumber Is Not Found");
}
