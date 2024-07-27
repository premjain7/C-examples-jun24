#include<stdio.h>
int main()

{
    char grade;

    printf("Enter Your Grade...: ");
    scanf("%c",&grade);

    switch(grade)
    {
        case 'S': printf("Super");break;
        case 'A': printf("Very Good");break;
        case 'B':printf("Fair");break;
        case 'y':printf("Absent");break;
        case 'F':printf("Fail");break;
        default:printf("Invalid Grade Inputted");

    }
}
