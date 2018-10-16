#include <stdio.h>
/* Homework assignment Chapter 1 */

main()
{
    int firstNum, secondNum, thirdNum, fourthNum, fifthNum, Num ;

    printf ( "Enter a 5 digit number: " ) ;
    scanf ( "%d", &Num ) ;

    fifthNum = Num % 10 ;
    fifthNum = fifthNum + 1 ;
    Num = Num / 10 ;

    fourthNum = Num % 10 ;
    fourthNum = fourthNum + 1 ;
    Num = Num / 10 ;

    thirdNum = Num % 10 ;
    thirdNum = thirdNum + 1 ;
    Num = Num / 10 ;

    secondNum = Num % 10 ;
    secondNum = secondNum + 1 ;
    Num = Num / 10 ;

    firstNum = Num % 10 ;
    firstNum = firstNum + 1 ;
    Num = Num / 10 ;

    printf ("Result: %d%d%d%d%d", firstNum, secondNum, thirdNum, fourthNum, fifthNum ) ;


}