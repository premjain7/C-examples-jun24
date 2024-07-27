//program to check if the inputted character is a digit using conditional operators
#include<stdio.h>
int main()
{
    char ch;

    printf("Enter A Character...:");
    scanf("%c",&ch);

    ch>='0'&&ch<='9'?printf("It Is A Digit"):printf("It Is Not A Digit");
}
