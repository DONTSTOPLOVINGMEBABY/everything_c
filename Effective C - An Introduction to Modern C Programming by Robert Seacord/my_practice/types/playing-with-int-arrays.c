#include <stdio.h>


int summation( int function_array[], size_t length ) {

	int sum = 0 ; 

	for (int ctr = 0 ; ctr < length ; ctr++) 
		sum += function_array[ctr] ; 

	return sum ; 

}	



void main( int argc, char *argv[] ) {

	int integer_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} ; 
	size_t array_in_bytes = sizeof(integer_array) ; 
	size_t length_of_singular_element = sizeof(integer_array[0]) ; // same as saying sizeof(int) ; 
	size_t length_of_array = array_in_bytes / length_of_singular_element ; 
	

	printf("%ld\n", array_in_bytes) ; 
	printf("%ld\n", length_of_singular_element) ; 
	printf("%ld\n", length_of_array) ; 
	printf("Sum of the array: %d\n", summation( integer_array, length_of_array)) ; 

	for (int ctr = 0 ; ctr < length_of_array ; ctr++) 
		printf("%d ", integer_array[ctr]) ; 



	puts("") ; 
	puts("Done!") ;		

}
