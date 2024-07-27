//program to check leap year
#include<stdio.h>
int main()
{
    int year=0;

    printf("Enter Your Birth Year...: ");
    scanf("%d",&year);

    if(year%4==0)
        printf("You were Born In Leap Year");
    else
        printf("You were Not Born In Leap Year");
return 0;

}
