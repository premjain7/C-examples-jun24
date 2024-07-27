//program to read n numbers and print max and min numbers
#include<stdio.h>
int main()
{
    int no,max,min,i=1,no1;

    printf("How Many Numbers You Wanna Enter...:");
    scanf("%d",&no);

            min=max;


    while(i<=no)
    {
        printf("Enter A Number...:");
        scanf("%d",&no1);
        i++;

        if(no1>max)
            max=no1;



        if(no1<min)
            min=no1;


    }

    printf("%d %d",max,min);
}
