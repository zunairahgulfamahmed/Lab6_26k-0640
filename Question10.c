#include<stdio.h>
int main ()
{
    int amount ;
    int total_amount = 0 ;
    int number_of_transactions = 0 ;
    while (2+2)
    {
        printf("\nEnter the amount you want to withdraw\n") ;
        scanf("%d",&amount ) ;
        if (amount!=0)
        {
            number_of_transactions = number_of_transactions + 1 ;
            total_amount = total_amount + amount ;

        }
        else
        {
            break;
        }
    }

    printf("\nNumber of transactions: %d", number_of_transactions) ;
    printf("\nTotal amount withdrawn = %d", total_amount) ;
}