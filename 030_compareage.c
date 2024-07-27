//program to compare age of 2 friends
#include<stdio.h>
int main()
{
    int age1,age2;
    char name1[20],name2[20];
    age1=age2=0;

    printf("Enter Your Name...:");
    scanf("%[^\n]",&name1);

    printf("Enter Your Age...:");
    scanf("%d",&age1);

    printf("Enter Your Name...:");
    fflush(stdin);
    scanf("%[^\n]",&name2);

    printf("Enter Your Age...:");
    scanf("%d",&age2);

    if(age1>age2)
    {
        printf("%s is older than %s",name1,name2);

    }
    if(age2>age1)
    {
        printf("%s is older than %s",name2,name1);
    }

    else
    {
        printf("%s and %s are of same age",name1,name2);
    }

    return 0;


}
