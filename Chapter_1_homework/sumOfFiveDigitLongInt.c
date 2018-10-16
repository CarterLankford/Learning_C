#include <stdio.h>
/* Homework assignment Chapter 1 */

main()
{
    int Digit1, Digit2, Digit3, Digit4, Digit5, Num, Sum ;

    printf ( "Enter a 5 Digit number: " ) ;
    scanf ( "%d", &Num ) ;
    Sum = 0 ;

    Digit1 = Num % 10 ;
    Num = Num / 10 ;

    Digit2 = Num % 10;
    Num = Num / 10 ;

    Digit3 = Num % 10 ;
    Num = Num / 10 ;

    Digit4 = Num % 10 ;
    Num = Num / 10 ;

    Digit5 = Num % 10;
    Num = Num / 10 ;

    Sum = Digit1 + Digit2 + Digit3 + Digit4 + Digit5 ;

    printf ( "Sum = %d\n", Sum) ;


    printf ( "Reversed Number = %d%d%d%d%d", Digit1, Digit2, Digit3, Digit4, Digit5 ) ;
}