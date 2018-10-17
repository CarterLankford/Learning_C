#include <stdio.h>

main()
{
    char ch = 'C', y = '0', usrInput ;
    int x = 68, random ;  

    printf ( "Enter a character value: " ) ; 
    scanf ( "%c", &usrInput ) ;

    printf ( "ASCII Value of %c is %d", usrInput, usrInput ) ;
    
    usrInput == '0' ? random = 0 : ( random = 1 ) ;

    printf ( "\nIf zero was entered it will equal zero, else it will be 1: %d", random ) ;

    /*
    C1
    printf ("Character value(ch = 'C'): %c\nInt Value(ch = 'C'): %d\n", ch, ch ) ;
    printf ("Character value(x = 68): %c\nInt Value(x = 68): %d\n", x, x ) ;
    */

    /* Try combinding them */
    /* challenge, reverse the word "hello" */
   
    /*
    C1
    printf ( "%c %c %d", ch, x, y ) ;
    */
    
}