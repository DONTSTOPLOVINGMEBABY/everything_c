#include <stdio.h> 


int main(void) {
	
	int a = 4 ; 
	printf("a:%d\n", a) ; 

	int *p = &a ; 
	printf("*p=%d\n", *p) ; 

	*p = 55 ; 


	puts("now doing *p=55") ; 

	printf("a:%d\n", a) ; 
	printf("*p=%d\n", *p) ; 

	return 0 ; 

} 

