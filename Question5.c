#include<stdio.h>
int main ()
{
    int notes500 [5], notes200 [5], notes100 [5] ;
    int i, withdrawal_amount ;
    int total_money = 0 ;

    for (i=0; i<5; i++)
    {
      printf("Enter the number of 500 dollar notes in slot %d\n", i+1) ;
      scanf("%d", &notes500[i]) ;
      printf("Enter the number of 200 dollar notes in slot %d\n", i+1) ;
      scanf("%d", &notes200[i]) ;
      printf("Enter the number of 100 dollar notes in slot %d\n", i+1) ;
      scanf("%d", &notes100[i]) ;  
      total_money = total_money + (500*notes500[i]) + (200*notes200[i]) + (100*notes100[i]) ;
    }

    printf("Enter the amount you want to withdraw\n") ;
    scanf("%d", &withdrawal_amount) ;

    if (withdrawal_amount%100 == 0)
    {
        if (total_money>withdrawal_amount)
        {
            printf("\nTransaction approved\n") ;
        }
        else 
        {
            printf("Insufficient Funds\n") ;
        }
    }
    else 
    {
        printf("Invalid amount, Enter amount in multiples of 100\n") ;
    }




}