#include <stdio.h>
/* Homework assignment Chapter 2 */

main()
{
    int usrInput, digit1, digit2, digit3, digit4, digit5, reversed ;

    printf ( "Enter a five digit number:" ) ; 
    scanf ( "%d", &usrInput ) ; 
    
    digit5 = usrInput % 10 ;
    digit4 = (usrInput/10) % 10 ; 
    digit3 = (usrInput/100) % 10 ;
    digit2 = (usrInput/1000) % 10 ;
    digit1 = (usrInput/10000) ;
     
    reversed = ( digit5 * 10000 ) + ( digit4 * 1000 ) + ( digit3 * 100 ) + ( digit2 * 10 ) + digit1 ; 
 
    printf ( "%d", reversed ) ;

    if ( usrInput == reversed )
    {
        printf ( "\nOriginal number '%d' and reversed number '%d' match.", usrInput, reversed ) ;
    }
    else
    {
        printf ( "\nOriginal number '%d' and reversed number '%d' don't match.", usrInput, reversed ) ;
    }
    
}