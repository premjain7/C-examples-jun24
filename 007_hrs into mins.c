//program to convert hrs into mins

#include<stdio.h>
main()
{
    int tm,h,m;
   tm=h=m=0;
    printf("\nEnter the total flying time from Singapore to Hyderabad (in minutes)...: ");
    scanf("%d",&tm);

    h=tm/60;
    m=tm%60;

    printf("\nYour Flying Time is %d hrs and %d mins",h,m);







}
