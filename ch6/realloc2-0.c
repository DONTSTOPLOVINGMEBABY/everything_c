#include <stdio.h> 
#include <stdlib.h>


int main(){

	int size = 20 ; 
	double *ptr = malloc(sizeof(double) * size) ;
       	if (ptr == NULL) {
		exit(-1) ; 
		} 

	ptr[0] = 1 ;
       	int ctr ;   
	int cpyI , oldsize = size ; 
	double *ptr2 ; 
		

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
	ptr2 = realloc(ptr, size * sizeof(double)) ; 	

	if (ptr2 == NULL) {
		exit(-1) ;
	}



	for (int i = oldsize ; i < size ; i++){
		ctr = 1 ;
	       	cpyI = i ; 	
		while ( cpyI > 0 ) {
			ctr *= 2 ; 
			cpyI -= 1 ; 
			} 
		*(ptr2 + i) = ctr ; }


	for (int i = oldsize ; i < size ; i++) 
		printf("%f ", ptr2[i]) ; 

	puts(" ") ; 



	free(ptr2) ; 
	return 0 ; 

}
