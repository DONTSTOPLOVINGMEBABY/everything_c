#include <stdio.h> 
#include <stdlib.h> 

int *main(){

	int *ip ; 
	ip = (int *)malloc(sizeof(int) * 10) ; 

	for (int ctr = 0 ; ctr < 10 ; ctr++){
		*(ip + ctr) = ctr ; } 

	free(ip) ; 
	ip = NULL ; 	

	return ip ;

} 
