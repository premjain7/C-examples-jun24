#include<stdio.h>
main()
{

    int r;
    const float PI=3.14;
    float a;

    printf("\nEnter The Radius of The Circle...:");
    scanf("%d",&r);

    a=PI*r*r;

    printf("\nRequired Area of the Circle is ...: %.2f",a);


}
