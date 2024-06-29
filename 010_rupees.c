#include<stdio.h>
main()
{
    int r,p;
    r=p=0;

    printf("Enter The Amount In Rupees..:");
    scanf("%d",&r);

    p=100*r;

    printf("\nThe Amount In Paise is ...: %d\n",p);

}
