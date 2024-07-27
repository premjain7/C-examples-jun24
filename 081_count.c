//program to read numbers from the user till he inputs 0 and count even and odd and print  their sum
#include<stdio.h>
int main()
{
    int no,sum1=0,sum2=0,c1=0,c2=0,i=0;

    while(no!=i)
    {
        printf("Enter A Number...:");
        scanf("%d",&no);

        if(no%2==0)
        {
            c1++;
            sum1=sum1+no;
        }
        else
        {
            c2++;
            sum2=sum2+no;
        }
    }

    printf("\nCount Of Even Numbers Is...:%d",c1);
    printf("\nCount Of Odd Numbers Is....:%d",c2);
    printf("\nSum Of Even Numbers Is...:%d",sum1);
    printf("\nSum Of Odd Numbers Is....:%d",sum2);






}
