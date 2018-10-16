#include <stdio.h>
/* Homework assignment Chapter 1 */

main()
{
    int usrInput, amntTens, amntFifties, amntHundreds ;

    printf ( "Enter Value :$" ) ;
    scanf ( "%d", &usrInput ) ;
    
    amntTens = usrInput / 10 ;
    amntFifties = usrInput / 50 ;
    amntHundreds = usrInput / 100 ;

    printf ( "Bills to be returned\n10's: %d\n50's: %d\n100's: %d", amntTens, amntFifties, amntHundreds ) ;
}