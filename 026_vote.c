#include<stdio.h>
int main()
{
    int age,eligible;
    const int VOTE=18;
    age=eligible=0;

    printf("Enter Your Age...:");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("Congratulations You Are Eligible For Voting");
    }
    else
    {
        eligible=VOTE-age;
        printf("Sorry You Have to Wait %d More Years To Be Eligible For Voting ",eligible);
    }
    return 0;
}
