#include <stdio.h>
/* Homework assignment Chapter 2 */

main()
{
    int ageRam, ageShyam, ageAjay ;

    printf ( "\nRam's age:" ) ;
    scanf ( "%d", &ageRam ) ;

    printf ( "\nShyam's age:" ) ;
    scanf ( "%d", &ageShyam ) ;

    printf ( "\nAjay's age:" ) ;
    scanf ( "%d", &ageAjay ) ;

    if ( ageRam < ageShyam && ageRam < ageAjay )
    {
        printf ( "Ram is the youngest." ) ; 
    }
    else if ( ageShyam < ageRam && ageShyam < ageAjay )
    {
        printf ( "Shyam is the youngest." ) ; 
    }
    else
    {
        printf ( "Ajay is the youngest." ) ;
    }

}