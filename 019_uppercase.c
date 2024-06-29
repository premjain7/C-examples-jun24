#include<stdio.h>

main()

{
    char ch1,ch2;
    printf("Enter A Character In Upper Case(A-Z)...:");
    scanf("%c",&ch1);

    ch2=ch1+32;

    printf("The Lower Case Form Of %c is:%c",ch1,ch2);


}
