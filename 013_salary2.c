#include<stdio.h>
main()
{
    int bs,al,ded,gs,ns;
    bs=al=ded=gs=ns=0;
    printf("Enter Your Basic Salary..:");
    scanf("%d",&bs);

    printf("Enter Your Allowances..:");
    scanf("%d",&al);

    printf("Enter Your Deductions..:");
    scanf("%d",&ded);

    gs = bs+ al;
	ns = gs - ded;

	printf("Your Gross Salary is...:%d\n",gs);
	printf("\nYour Net Salary is...:%d\n",ns);






}
