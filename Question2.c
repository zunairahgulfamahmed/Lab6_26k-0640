#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main ()
{
    char passwords [5] [30] ;
    int i,a ;
    int password_scores [5] ;
    int highest ;
    int strongest_password = 1 ;
    int scored_lower = 0;


    for (i=0 ; i<5; i++)
    {
        printf("Enter password %d\n", i+1) ;
        scanf("%s", passwords[i]) ;
    }


    for (i=0 ; i<5; i++ )
    {
        int score = 0 ;
        for (a=0 ; passwords[i][a] != '\0' ; a++)
        {

            
            if (islower(passwords[i][a]))
            {
                score = score + 1 ;
            }
            if (isupper(passwords[i][a]))
            {
                score = score + 2 ;
            }
            if (isdigit(passwords[i][a]))
            {
                score = score + 3 ;
            }
            
        }

        if (strstr(passwords[i], "123"))
        {
            score = score - 3 ;
        }

        if (strlen(passwords[i]) >= 8)
        {
            score = score + 5 ; 
        } 

        password_scores[i] = score ;

        if (i==0 || password_scores[i] > highest)
        {
            highest = password_scores [i] ;
            strongest_password = i+1 ;
        }

        if ( password_scores[i] < 10 )
        {
            scored_lower = scored_lower + 1 ;
        }

        printf("\npassword %d score = %d", i+1, score) ;
    } 

    printf("\nThe strongest password is password:%d\n", strongest_password) ;
    printf("%d passwords scored below 10", scored_lower) ;
    
}