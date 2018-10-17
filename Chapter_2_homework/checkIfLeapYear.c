#include <stdio.h>
/* Homework assignment Chapter 2 */

main ()
{
    int usrInput ;
    
    printf ( "Enter a year: " ) ;
    scanf ( "%d", &usrInput ) ;

    if (usrInput % 4 == 0 && usrInput % 100 == 0 && usrInput % 400 == 0)
    {     
        printf ( "Is a leap year." ) ;
    }
    else
    {
        printf ( "Not a leap year." ) ; 
    }
}

/*

If the year is evenly divisible by 4, go to step 2. ...
If the year is evenly divisible by 100, go to step 3. ...
If the year is evenly divisible by 400, go to step 4. ...
The year is a leap year (it has 366 days).
The year is not a leap year (it has 365 days).

*/