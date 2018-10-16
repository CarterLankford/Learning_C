#include <stdio.h>
/* Homework assignment Chapter 1 */

main()
{
    int totalSellingPrice, totalProfitEarned ;
    float pricePerEachItem ;

    printf ( "Sold 15 Items, need total sold price, and how much profit was made in total." ) ; 
   
    printf ( "\nTotal Selling Price: $" ) ;
    scanf ( "%d", &totalSellingPrice ) ;
    printf ( "\nTotal Profit Earned: $" ) ;
    scanf ( "%d", &totalProfitEarned ) ; 

    pricePerEachItem = totalSellingPrice - totalProfitEarned ;
    pricePerEachItem = pricePerEachItem / 15 ;

    printf ( "Price of each item was $%f", pricePerEachItem ) ;
}