#include <stdio.h>
#include <stdlib.h> 



unsigned long long int fibonnaci ( long argument ) {

	if (argument <= 2)
		return 1 ; 

	else
		return fibonnaci(argument - 1) + fibonnaci(argument - 2) ; 

}



void main( int argc, char *argv[] ) {


	if (argc < 2) {
		puts("Program requires you supply an argument from the command line to be passed to the function call.\nExiting...");
		exit(-1) ; }


	long fib_argument = strtol(argv[1], NULL, 10) ; 
	unsigned long long int function_call = fibonnaci(fib_argument) ; 
	printf("%llu\n", function_call) ; 

	exit(0) ; 

} 
