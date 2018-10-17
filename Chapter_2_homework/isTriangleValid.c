#include <stdio.h> 
/* Homework assignment Chapter 2 */

main()
{
    int ang1, ang2, ang3 ;

    printf ( "Angle 1 degrees: " ) ;
    scanf ( "%d", &ang1) ;

    printf ( "Angle 2 degrees: " ) ;
    scanf ( "%d", &ang2) ;

    printf ( "Angle 3 degrees: " ) ;
    scanf ( "%d", &ang3) ;
    
    if ( (ang1 + ang2 + ang3 ) == 180 )
    {
        printf ( "Triangle is valid" ) ; 
    }
    else
    {
        printf ( "Triangle is not valid" ) ; 
    }
}
