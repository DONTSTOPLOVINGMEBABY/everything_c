#include <stdio.h> 
#include <stdlib.h>


unsigned long long int factorial (unsigned long long int number) {

	if (number <= 1) 
		return number ; 

	else
		return number * factorial(number - 1) ; 

	// factorial(5)
	// 5 * factorial(4) 
	// 5 * 4 * factorial(3) 
	// 5 * 4 * 3 * factorial(2)
	// 5 * 4 * 3 * 2 * factorial(1)
	// 5 * 4 * 3 * 2 * 1 = 120

}	




void main( int argc, char *argv[]  ) {

	if (argc < 2) {
		puts("Program requires you supply an argument from the command line to be passed to the function call.\nExiting...") ; 
		exit(-1) ; }

	char *endPtr ; 	
	unsigned long long int argument = strtoull(argv[1], &endPtr, 10) ;
	// Can also run this function with NULL instead of specifying a pointer
	unsigned long long int function_call = factorial(argument)  ; 


	printf("%llu! = %llu\n", argument , function_call) ; 

	exit(0) ; 	
 

} 
