#include <stdio.h> 


int main() {

	unsigned int x = 7 ;  
	unsigned int y = 4 ; 

	printf("%d&%d = %d\n", x, y, x&y) ; 

	printf("%d|%d = %d\n", x, y, x|y) ;

	printf("~%d = %d\n", x, ~x) ;

	printf("%d<<3 = %d\n", x, x<<3) ;

	printf("%d>>3 = %d\n", x, x>>3) ; 

	printf("%d^%d = %d\n", x, y, x^y) ; 


	return 0 ; 

}

