#include <stdio.h>
/* Homework assignment Chapter 1 */

main ()
{
    int c, d ;
    printf ( "Enter int for C: " ) ;
    scanf ( "%d", &c ) ;
    printf ( "Enter int for D: " ) ;
    scanf ( "%d", &d ) ;

    c = c + d ;
    d = c - d ;
    c = c - d ;

    printf ( "C is %d\n", c ) ;
    printf ( "D is %d", d ) ;
}