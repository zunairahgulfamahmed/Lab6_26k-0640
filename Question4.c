#include<stdio.h>
int main ()
{
    int marks [15] ;
    int i, highest, lowest, range ;
    float avg ;
    float sum = 0 ;
    int exactly_100 = 0 ;

    for (i = 0 ; i < 15 ; i++)
    {
        printf("Enter marks of student %d\n", i+1) ;
        scanf("%d", &marks[i]) ;
        marks[i] = marks [i] + 5 ;
        if (marks[i]>=100)
        {
            marks[i] = 100 ;
            exactly_100 = exactly_100 + 1 ;
        }

        sum = sum + marks[i] ;

        if (i==0||marks[i]>highest)
        {
            highest = marks[i] ;
        }
        if (i==0||lowest>marks[i])
        {
            lowest = marks[i] ;
        }

    }

    avg = sum / 15 ;
    range = highest - lowest ;

    printf("Class Average = %.2f", avg) ;
    printf("\nNumber of Students who got 100 = %d", exactly_100) ;
    printf("\nRange = %d", range) ;

}