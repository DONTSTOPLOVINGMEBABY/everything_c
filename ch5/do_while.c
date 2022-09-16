#include <stdio.h> 
#include <limits.h>


void firstexample(void) ; 

void io_example(void) ;  

int main()
{

	firstexample() ; 
	
	io_example() ; 


	return 0 ; 
}





void firstexample(void) {


	int do_counter ;
	int while_counter ; 

	int n = 0 ; 

	while (n != 0) {

		puts("should not execute") ;
		
	}


	

	do {
		puts("Should execute one") ; 
	
	} while (n != 0) ; 	


} 


void io_example(void) {

	int count; float quant ; char units[21], item[21] ; 
	do {
		count = fscanf(stdin, "%f%20s of %20s", &quant, units, item) ; 
		fscanf(stdin, "%*[^\n]");
	} while (!feof(stdin) && !ferror(stdin)) ; 

}




