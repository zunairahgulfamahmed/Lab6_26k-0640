#include<stdio.h>
int main ()
{
    int cinema_seats [15] ;

    int i, first_available_seat, last_available_seat ;
    int booked = 0 ;
    int empty_seats = 0 ;
    int filled_seats = 0 ;
    for (i=0; i<15; i++)
    {
        printf("Enter 0 if seat %d is empty and 1 if its filled\n", i+1) ;
        scanf("%d", &cinema_seats[i]) ;
    }

    for (i=0;i<15;i++)
    {
        if (cinema_seats[i]==0)
        {
            empty_seats = empty_seats + 1 ;
        }
        else 
        {
            filled_seats = filled_seats + 1 ;
        }
    }

    for (i=0; i<15; i++)
    {
        if (cinema_seats[i]==0)
        {
            first_available_seat = i+1 ;
            break;
        }
    }

    for (i=14; i>=0; i--)
    {
        if (cinema_seats[i]==0)
        {
            last_available_seat = i+1 ;
            break;
        }
    }

    for (i=0; i<15; i++)
    {
        if (cinema_seats[i]==0)
        {
            booked=booked + 1 ;
            cinema_seats[i]=1;
        }
        if (booked>=3)
        {
            break;
        }
    }

    printf("\nSeats filled: %d", filled_seats) ;
    printf("\nSeats empty: %d", empty_seats) ;
    printf("\nFirst available seat: %d", first_available_seat) ;
    printf("\nLast available seat: %d\n", last_available_seat) ;

    for (i=0;i<15;i++)
    {
        printf("%d\n", cinema_seats[i]) ;
    }
    
}