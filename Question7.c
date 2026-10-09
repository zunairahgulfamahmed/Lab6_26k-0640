#include<stdio.h>
int main ()
{
    int original, digit ;
    int reversed = 0 ;

    printf("Enter a number\n") ;
    scanf("%d", &original) ;

    int num = original ;

    while (num > 0)
    {
        digit = num % 10 ; 
        reversed =  (reversed*10) + digit ;
        num = num / 10 ; 
    } 

    if (original==reversed)
    {
        printf("\nIts a plaindrome") ;
    }
    else
    {
        printf("\nIts not a plaindrome") ;
    }

}