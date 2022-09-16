#include <stdio.h> 



int fibonnaci( int count_to ){

	if (count_to < 2 ) 
		return 1 ; 

	return count_to + fibonnaci(count_to - 1) ; 


}



int main(){


	int integer1 ; 
       	puts("Enter an integer => ") ; 	
	scanf("%d", &integer1) ; 


	

	if (integer1 == 5)
		goto INTEGER5 ; 

	 

	int fib = fibonnaci(integer1) ; 
	printf("Result of Fib Sequence %d\n", fib) ; 	
	

	INTEGER5:
		if (integer1 == 5)
			puts("You skipped fib sequence") ; 
		puts("This statement always executes") ;  	
	
	
	return 0 ;



}

