#include <stdio.h>
/* Homework assignment Chapter 1 */

main()
{
    int totalPop, totalPopMen, totalPopWomen, totalPercentMen, totalLiteracyPop, literateMale, literateFemale, iliterateMale, iliterateFemale ; 
    
    totalPop = 80000 ;
    totalPopMen = ( ( 52 * totalPop ) / 100 ) ;
    totalPopWomen = totalPop - totalPopMen ; 

    /* printf ( "Total men = %d \nTotal Women = %d", totalPopMen, totalPopWomen) ; */

    totalLiteracyPop = ( ( totalPop * 48 ) / 100 ) ; 
    /* printf ( "\nTotal Literacy Pop = %d", totalLiteracyPop ) ; */

    literateMale = ( ( totalPop * 35 ) / 100 ) ;
    iliterateMale = totalPopMen - literateMale ;
    /* printf ( "\nTotal literate men %d \nTotal iliterate men %d",  literateMale, iliterateMale ) ; */

    literateFemale = ( totalLiteracyPop - literateMale ) ;
    iliterateFemale = ( totalPop - ( literateMale + iliterateMale + literateFemale ) ) ;
    /* printf ( "\nTotal literate female %d \nTotal iliterate female %d",  literateFemale, iliterateFemale) ; */
    printf ( "Iliterate Males = %d\nIliterate Females = %d", iliterateMale, iliterateFemale ) ;
}