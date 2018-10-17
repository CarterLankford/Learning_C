#include <stdio.h>
/* Homework assignment Chapter 2 */

main()
{
    int usrInput, chkInt;

    printf ( "Enter an number: " ) ; 
    scanf ( "%d", &usrInput ) ;

    chkInt = usrInput % 2 ;

    if ((chkInt % 2) == 1 )
    {
        printf ( "%d is odd.", usrInput ) ;
    }
    else
    {
        printf ( "%d is even.", usrInput ) ;
    }
}