#include <stdio.h>


// Static Values have to be initialized with a value and cannot be initialized with a variable! 



void increment(void) {
	static unsigned int counter = 0 ; 
	counter++ ; 
	printf("%d ", counter) ; 
}

int main(void) {
	for (int i = 0 ; i < 50 ; i++) {
		increment() ; 
	} 
	puts("") ; 
	return 0 ;
}


/* EXAMPLE! 
 
   int *func(int i) {
   	const int j = i ; 	// ok! 
	static int k = j ; 	// error!
	return &k ; }
*/ 	
