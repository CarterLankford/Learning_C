#include <stdio.h>
/* Homework assignment Chapter 1 */

main()
{
    float km;
    int mt, ft, in, cm;
    printf ( "Enter distnace in km: " ) ;
    scanf ( "%f", &km ) ;
    mt = km * 1000 ;
    cm = mt * 100 ;
    in = cm * 0.393701 ;
    ft = in * 12 ;
    printf ( "Distance in meters: %d \nDistance in CM %d \nDistance in feet: %d \nDistance in Inches: %d", mt, cm, ft, in ) ;
    
}