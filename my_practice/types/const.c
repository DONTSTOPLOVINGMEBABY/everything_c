#include <stdio.h> 


int main(void) {


	/* Results in runtime error 

	int mutable = 100 ; 
	const int immutable = 200 ; 

	mutable = 500 ; 
	immutable = 1000 ; 

	*/ 


	int i = 12 ; 
	const int j = 12 ; 
	const int *ip = &i ; 
	const int *jp = &j ; 

	// this works: *(int *)ip = 42 ; 	
	// this doesnt: *(int *)jp = 42 ; 

	printf("i: %d, const j: %d, const *ip: %d, const *jp: %d\n", i, j, *ip, *jp) ; 



	return 0 ; 

} 
