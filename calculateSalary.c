#include <stdio.h>
/* Homework assignment Chapter 1 */

main()
{
	int bs;
	float da, hra, gs;
	
	printf ( "Enter base salary: " ) ;
    scanf ( "%d", &bs ) ;
	da = bs * 40 / 100 ;
	hra = bs * 20 / 100 ;
	gs = bs - da - hra ;
	printf ( "%f" , gs );
}