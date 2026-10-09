#include<stdio.h>
int main ()
{
    int cars[12] ;
    int i, avg ;
    int sum = 0 ;
    int overloaded = 0 ;
    for (i=0; i<12 ; i++) 
    {
        printf("Enter the number of cars in signal %d \n", i+1) ;
        scanf("%d", &cars[i]) ;
    }

    int highest = cars[0] ;
    int lowest = cars [0] ;
    int difference, high_signal, low_signal ;


    for (i=0; i<12; i++)
    {
        sum = sum + cars[i] ;
    }

    avg = sum / 12 ;

    for (i=0 ; i<12 ; i++)
    {
        if (cars[i] > avg)
        {
            overloaded = overloaded + 1 ;
        }

        if (cars[i] > highest)
        {
            highest = cars[i] ;
            high_signal = i + 1 ;
        }

        if (cars[i] < lowest)
        {
            lowest = cars[i] ;
            low_signal = i + 1 ;
        }
    }

    difference = highest - lowest ;
    printf("\nNumber of overloaded signals are %d",overloaded) ;
    printf("\nSignal with highest number of cars is Signal Number %d", high_signal) ;
    printf("\nSignal with lowest number of cars is Signal Number %d", low_signal) ;
    printf("\nThe difference between number of cars at highest and lowest signal is = %d cars", difference) ;
}   