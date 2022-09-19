#include <stdio.h> 
#include <stdlib.h>


int main(){

	int size = 20 ; 
	double *ptr = malloc(sizeof(double) * size) ; 
	ptr[0] = 1 ;
       	int ctr ;   
	int cpyI , oldsize = size ; 

		

	for (int i = 1 ; i < size ; i++){
		ctr = 1 ;
	       	cpyI = i ; 	
		while ( cpyI > 0 ) {
			ctr *= 2 ; 
			cpyI -= 1 ; 
			} 
		*(ptr + i) = ctr ; }


	for (int i = 0 ; i < size ; i++) 
		printf("%f ", ptr[i]) ; 

	puts(" ") ; 

	size *= 1.5 ; 
	ptr = realloc(ptr, size * sizeof(double)) ; 	

	for (int i = oldsize ; i < size ; i++){
		ctr = 1 ;
	       	cpyI = i ; 	
		while ( cpyI > 0 ) {
			ctr *= 2 ; 
			cpyI -= 1 ; 
			} 
		*(ptr + i) = ctr ; }


	for (int i = oldsize ; i < size ; i++) 
		printf("%f ", ptr[i]) ; 

	puts(" ") ; 




	free(ptr) ; 
	return 0 ; 

}
