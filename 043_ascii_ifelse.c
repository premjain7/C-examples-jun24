#include<stdio.h>
int main()
{
    char ch;

    printf("Enter A Character...:");
    scanf("%c",&ch);


    if(ch>=65&&ch<91)
        printf("It Is A UpperCase Letter");
    else
        if(ch>=97&&ch<123)
           printf("It Is A Lower Case Letter");
        else
            if(ch>=48&&ch<58)
               printf("It Is A Digit");
            else
                printf("It Is A Special Character");


}
