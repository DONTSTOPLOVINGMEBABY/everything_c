#include <stdlib.h> 
#include <stdio.h> 
#include <string.h>


typedef struct {
	char c[10] ; 
	int i ; 
	double d ; 
} widget ; 


int main() {

	widget *p = malloc(sizeof(widget)) ; 

	widget hank ; 

	size_t sizeof_widget = sizeof(*p) ; 
	size_t sizeof_hank = sizeof(hank) ;

	printf("Size of *p: %zu\n", sizeof_widget) ; 
	printf("Size of hank: %zu\n", sizeof_hank) ; 

	strcpy(p->c, "Henry") ; 
	p->i = 22 ; 
	p->d = 237.89 ; 


	if (p == NULL) {
		puts("Apparently malloc failed?") ; 
	} 


	puts("Continuing with program") ;


	return 0 ; 



}

