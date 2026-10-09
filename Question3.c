#include<stdio.h>
int main ()
{
    int stock [10] ;
    int minimum [10] ;
    int i ;
    int reorder = 0 ;
    int highest_gap ;

    for (i=0 ; i<10 ; i++)
    {
        printf("Enter Current stock of product: %d\n", i+1) ;
        scanf("%d", &stock[i]) ;
        printf("Enter minimum required quantity of product: %d\n", i+1) ;
        scanf("%d", &minimum[i]) ;

        if (stock[i]<minimum[i])
        {
            printf("\nThis product needs %d units reordered\n", minimum[i]-stock[i]) ;
            reorder = reorder + (minimum[i]-stock[i]) ;
            if(i==0 || highest_gap<(minimum[i]-stock[i]))
            {
                highest_gap = minimum[i] - stock [i] ;
            }
        }
        else
        {
            printf("\nNo reorder required") ;
        }

    }
    printf("\nTotal reorder required = %d", reorder) ;
    printf("\nhighest reorder = %d", highest_gap) ;
}