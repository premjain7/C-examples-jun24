#include<stdio.h>
main()

{
    int bs,gs,ns,hra,da,pf;
    bs,gs,ns,hra,da,pf=0;

    printf("Enter Your Basic Salary...:");
    scanf("%d",&bs);

    hra=0.2*bs;
    da=0.1*bs;
    pf=0.05*bs;
    gs=bs+hra+da;
    ns=gs-pf;

    printf("Your Gross Salary is...:%d\n",gs);
    printf("Your Net Salary is...:%d\n",ns);


}
