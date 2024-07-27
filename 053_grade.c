//program to read marks of subjects and display grade
#include<stdio.h>
int main()
{
    int c,cpp,java;
    float tot,avg;
    c=cpp=java=tot=avg=0;

    printf("Enter Your C Marks...:");
    scanf("%d",&c);

    printf("Enter Your CPP Marks...:");
    scanf("%d",&cpp);

    printf("Enter Your Java Marks...:");
    scanf("%d",&java);

    if(c>=35&&cpp>=35&&java>=35)
    {
        tot=c+cpp+java;
        avg=tot/3;

        printf("\nTotal Is...:%.0f",tot);
        printf("\nAverage Is...%.2f",avg);

        if(avg>=90)
            printf("\nA+");
        else
            if(avg>=80&&avg<90)
               printf("\nA");
            else
                if(avg>=70&&avg<80)
                    printf("\nB+");
                else
                    if(avg>=60&&avg<70)
                       printf("\nC");

    }
    else
        {
        if(c<35)
          printf("\nYou Have Failed In C");

            if(cpp<35)
              printf("\nYou Have Failed In CPP");

                if(java<35)
                  printf("\nYou Have Failed In Java");

                  printf("\nNo Grade");
        }
        return 0;

}
