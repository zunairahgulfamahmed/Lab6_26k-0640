#include<stdio.h>
int main ()
{
    int transfers [10] ;
    int i, avg ;
    int flagged = 0 ;
    int sum = 0 ;
    int highest = 0 ;
    int normal_transfers = 0 ;

    for (i=0;i<10;i++)
    {
        printf("Enter transaction number: %d\n", i+1) ;
        scanf("%d", &transfers[i]) ;
    }

    for (i=0;i<10;i++)
    {
        if (transfers[i]<100 || transfers[i]>200000)
        {
            flagged = flagged + 1 ;
        }
        else
        {
            normal_transfers = normal_transfers + 1 ;
            sum = sum + transfers [i] ;
        }
    }

    for (i=0;i<10;i++)
    {
        if (highest==0 || transfers[i] > highest)
        {
            highest = transfers[i] ;
        }
    }

    avg = sum / normal_transfers ;

    printf("Average of all normal transactions: %d", avg) ;
    printf("Highest transfer = %d", highest) ;
    printf("Total flagged transfers = %d", flagged) ;

}