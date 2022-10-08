#include <stdio.h> 
#include <stdlib.h> 
int main(void) {


	if (puts("Hello, world!") == EOF) {
		return EXIT_FAILURE ;
		// code here never executes
	}

	return EXIT_SUCCESS ; 
	//code beneath here never executes
	//and is ignored by the compiler
}





	/*  // My Version // 

	int error_msg ;
	error_msg = puts("Hello, world!") ;

	if (error_msg != EOF) {
	puts("Worked") ; 
	return EXIT_SUCCESS;}

	else return -1 ; 
	*/ 	

