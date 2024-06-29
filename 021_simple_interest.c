#include<stdio.h>

main()
{
    float p,t,r,in;
    p=t=r=in=0;

    printf("Enter The Principle Amount..:");
    scanf("%f",&p);

    printf("Enter The Time(In Days)..:");
    scanf("%f",&t);

    printf("Enter The Rate..:");
    scanf("%f",&r);

    in=(p*t*r)/100;

    printf("Simple Interest is...:%.2f",in);




}
