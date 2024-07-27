//program to check if inputted number is prime
#include<stdio.h>
#include<math.h>
int main()
{
    int no,d=2;
    char c='n';

    printf("Enter A Number....:");
    scanf("%d",&no);

    while(d<=(sqrt(no)))
    {
        if(no%d==0)
        {
            c='y';
            break;
        }
        d++;
    }

    if(c=='n')
        printf("%d Is Prime Number",no);
    else
        printf("%d Is Not Prime Number",no);
}
