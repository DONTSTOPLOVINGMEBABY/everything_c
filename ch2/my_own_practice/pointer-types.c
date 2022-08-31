#include <stdio.h> 
#include <math.h> 

int main(void){

	int i = 17 ; 
	
	int *ip  ; 
	ip = &i ; 



	printf("i: %d\n", i) ; 
	printf("*ip: %d\n", *ip) ; 


	puts("okay, now doing int *ip = &i and setting i=2000.") ; 
	puts("I'm not sure what ip = &*ip; is meant to do") ; 


	ip = &*ip ; 
	
	i = 2000 ; 
	

	printf("i: %d", i) ; 
	printf("*ip: %d\n", *ip) ; 

		
 

	return 0 ; 

} 
