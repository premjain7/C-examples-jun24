//program to read height in cm and convert into feet
#include<stdio.h>
int main()

{
    float h1,h2;
    const float FEET=30.48;

    printf("Enter Your Height...(In cm):");
    scanf("%f",&h1);

    h2=h1/FEET;

    printf("Your Height In Feet Is...:%.2f",h2);

    if(h2>5.5)
        printf("\nTaller");
    else
        if(h2<4.5)
           printf("\nDwarf");



}
