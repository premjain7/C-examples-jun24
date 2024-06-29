#include<stdio.h>
main()
{
    int roll;
    double height;
    char gender,name[20];

    printf("Enter Your Name..:");
    scanf("%[^\n]",&name);
    fflush(stdin);

    printf("Enter Your Gender(M/F)..:");
    scanf("%c",&gender);
    fflush(stdin);

    printf("Enter Your Roll No..:");
    scanf("%d",&roll);
    fflush(stdin);

    printf("Enter Your Height..:");
    scanf("%lf",&height);

    printf("\nRoll No Occupies %d Bytes of Space",sizeof(roll));
     printf("\nGender Occupies %d Bytes of Space",sizeof(gender));
      printf("\nName Occupies %d Bytes of Space",sizeof(name));
       printf("\nHeight  Occupies %d Bytes of Space",sizeof(height));

}
