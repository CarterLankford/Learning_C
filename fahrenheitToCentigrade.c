#include <stdio.h>
/* Homework assignment Chapter 1 */

main()
{
    int f, cent;
    printf ( "What is the tempature in Fahrenheit? " ) ;
    scanf ( "%d", &f ) ;
    cent = ( f - 32 ) / 1.8 ;
    printf ( "Temp in Centigrade: %d", cent ) ;
}