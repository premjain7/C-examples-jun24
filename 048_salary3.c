//program to read salary and display bonus on basis of experience
#include<stdio.h>
main()
{
    int bs,al,ded,gs,ns,exp,bonus;
    bs=al=ded=gs=ns=0;
    printf("Enter Your Basic Salary..:");
    scanf("%d",&bs);

    printf("Enter Your Allowances..:");
    scanf("%d",&al);

    printf("Enter Your Deductions..:");
    scanf("%d",&ded);

    printf("Enter Your Work Experience(In Years)...:");
    scanf("%d",&exp);

    gs = bs+ al;
	ns = gs - ded;
	printf("Your Gross Salary is...:%d\n",gs);
	printf("\nYour Net Salary is...:%d\n",ns);

	if(exp>5)
        bonus=ns*3;
    else
        if(exp>3&&exp<=5)
           bonus=ns*2;
        else
            bonus=ns;

printf("Bonus Is...:%d",bonus);


}
