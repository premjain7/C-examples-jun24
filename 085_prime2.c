#include <stdio.h>
#include <math.h>
int main()
{
    int no,d;
    char isPrime;

    for (no = 2; no <= 100; no++)
    {
        isPrime='y';
        for (d=2; d<=sqrt(no);d++)
        {
            if (no%d== 0)
            {
                isPrime='n';
                break;
            }
        }

        if (isPrime=='y')
        {
            printf("\t%d ", no);
        }
    }

    return 0;
}
