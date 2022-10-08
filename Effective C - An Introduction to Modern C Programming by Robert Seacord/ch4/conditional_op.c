#include <stdio.h> 
#include <string.h> 


int main() {
	
	int a = 4, b = 4, c = 10 ; 
	int result ; 	
	char returnval[20] ;


	// result = condition ? valueReturnedIfTrue : valuedReturnedIfFalse


	result = a > c ? 1 : 0 ; 
	printf("%d\n", result) ; 
	

	a > b ? strcpy(returnval, "First") : strcpy(returnval, "Second") ;
	printf("%s\n", returnval) ; 


	return 0 ; 
}
