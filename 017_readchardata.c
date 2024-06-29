#include<stdio.h>
main()
{
    char name[20],gender,place[20];

    printf("Enter Your Name..:");
    scanf("%[^\n]",&name);
    fflush(stdin);

    printf("Enter Your Gender(M/F)..:");
    scanf("%c",&gender);
    fflush(stdin);

    printf("Enter Your Native Place..:");
    scanf("%[^\n]",&place);


    printf("\n%s-%c-%s", name,gender,place);


}
