#include <stdio.h>


void main( int argc, char *argv[] ) {

	int k = 100 ; 
	int *ptr ; 
	int **dbptr ; 


	ptr = &k ; 
	dbptr = &ptr ; 

	printf("k: %d\n", k) ; 
	printf("ptr: %d\n", *ptr) ; 
	printf("dbptr: %d\n", **dbptr) ; 


	k = 2000 ; 
	puts("changing k") ; 

	printf("k: %d\n", k) ; 
	printf("ptr: %d\n", *ptr) ; 
	printf("dbptr: %d\n", **dbptr) ; 


	*ptr = 5500 ; 
	puts("changing ptr") ; 

	
	printf("k: %d\n", k) ; 
	printf("ptr: %d\n", *ptr) ; 
	printf("dbptr: %d\n", **dbptr) ; 


	**dbptr = 12000 ; 
	puts("changing dbptr") ; 

	printf("k: %d\n", k) ; 
	printf("ptr: %d\n", *ptr) ; 
	printf("dbptr: %d\n", **dbptr) ; 



}
