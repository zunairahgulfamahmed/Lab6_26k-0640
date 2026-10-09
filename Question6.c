#include<stdio.h>
int main ()
{
    int fibonacci [10] ;

    fibonacci [0] = 1 ;
    fibonacci [1] = 1 ;

    int i ;
    for (i=0; i<8; i++)
    {
        fibonacci[i+2] = fibonacci[i] + fibonacci [i+1] ;
    }

    for (i=0; i<10; i++)
    {
        printf("%d\n", fibonacci[i]) ;
    }
}