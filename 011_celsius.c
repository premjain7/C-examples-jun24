#include<stdio.h>
main()
{
    float c,f;
    c=f=0;


    printf("Enter The Temperature In Fahrenheit..:"); // c/5=(f-32)/9
    scanf("%f",&f);

    c=((f-32)*5)/9;

    printf("Temperature In Celsius Is...:%.0f",c);




}
