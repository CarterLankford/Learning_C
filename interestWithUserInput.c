#include <stdio.h>
/* Calculation of simple interest */ 
/* Author gekay Date 25/05/2004 */ 
main( ) 
{  
    int   p, n ;  
    float   r, si ; 
    /* below is commands provided by the book
       I wanted to see if I could make it multi line */ 
    /* printf ( "Enter values of p, n, r" ) ; 
       scanf ( "%d %d %f", &p, &n, &r ) ; */
    printf ( "Enter value of p: " ) ;
    scanf ( "%d", &p ) ;
    printf ( "Enter value of n: " ) ;
    scanf ( "%d", &n ) ;
    printf ( "Enter value of r: " ) ;
    scanf ( "%f", &r ) ;


 
    si = p * n * r / 100 ;  
    printf ( "%f" , si ) ; 
}