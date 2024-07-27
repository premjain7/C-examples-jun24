//program to check if a number is divisible By Both 3 and 5
#include<stdio.h>
int main()
{
    int x;
    x=0;

    printf("Enter A Number...:");
    scanf("%d",&x);

    if(x%15==0)
    {
        printf("The Number Is Divisible By Both 3 And 5");
    }
    else
    {
        printf("The Number Is Not Divisible By Both 3 and 5");
    }

    return 0;
}
