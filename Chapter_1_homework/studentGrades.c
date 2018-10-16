#include <stdio.h>
/* Homework assignment Chapter 1 */

main()
{
    int mth, eng, hst, sci, avg ;

    printf ( "Enter the digit form of your grade\n" ) ;

    printf ( "Math: " ) ;
    scanf ( "%d", &mth ) ;

    printf ( "English: " ) ;
    scanf ( "%d", &eng ) ;

    printf ( "History: " ) ;
    scanf ( "%d", &hst ) ;

    printf ( "Science: " ) ;
    scanf ( "%d", &sci ) ;

    avg = (mth + eng + hst + sci) / 4;

    printf ( "Avarage grade is %d", avg ) ;
}