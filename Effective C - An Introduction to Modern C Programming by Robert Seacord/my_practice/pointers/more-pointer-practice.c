#include <stdio.h> 






void main( int argc, char *argv[] ) {


	 
	double number ; 
	double *ptr = &number ; 

	double *secondpntr = &*ptr ; 


	number = 3.141592 ; 	

	printf("Number: %lf\n", number) ; 
	


	puts("Changing the value of number") ; 

	number = 1.999999 ; 


	printf("*ptr: %lf\n", *ptr) ; 

	printf("*secondpntr: %lf\n", *secondpntr) ; 	

	 


	

}
