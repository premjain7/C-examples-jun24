//program to make a restaurant application
#include <stdio.h>

int main()

   {
       int opt,no,bill;
       opt=no=bill=0;


    printf("\tVeg Khana Restaurant");
    printf("\n\t--------------------");

    printf("\nS.No");
    printf("\tItems");
    printf("\t\tPrice");

    printf("\n1.");
    printf("\tIdli");
    printf("\t\tRs.25");

    printf("\n2.");
    printf("\tDosa");
    printf("\t\tRs.50");

    printf("\n3.");
    printf("\tVada");
    printf("\t\tRs.20");

    printf("\n4.");
    printf("\tUpma");
    printf("\t\tRs.20");

    printf("\n5.");
    printf("\tExit");

    printf("\nWhich Item To Order...:");
    scanf("%d",&opt);

    printf("\nHow Many Plates...:");
    scanf("%d",&no);

    if(opt==1)
        bill=no*25;
    else
        if(opt==2)
          bill=no*50;
        else
            if(opt==3)
              bill=no*20;
            else
                if(opt==4)
                  bill=no*25;
                else
                    exit(0);

printf("Bill Is...:Rs.%d",bill);



    return 0;
}


