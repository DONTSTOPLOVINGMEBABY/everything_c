#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

#define N 50 


int main(){
	
	


	int *ptr = malloc(sizeof(int) * N) ; 	

	for (int i = 0 ; i < N ; i++)
	       *(ptr + i) = i ; 
	
	ptr[28] = 6969 ; 

	for (int i = 0 ; i < N ; i++)
	       printf("%d ", *(ptr + i)) ;

	puts("") ; 	
	
	
	int *a = calloc(10, sizeof(int)) ; 
	printf("%ld\n", sizeof(a)) ;
	
	a[2] = 33 ;
       	for (int i = 0 ; i < 10 ; i++) 
		printf("%d ", a[i]) ;

	puts("") ; 		


	int *f = malloc(sizeof(int)) ; 
	f[0] = 23 ; 
	free(f) ; 

	   



	//end routine
	free(ptr) ; 
	free(a) ;
       	free(f) ; 	
	ptr = NULL ; 
	a = NULL ; 
	f = NULL ; 


	return 0 ; 

}

