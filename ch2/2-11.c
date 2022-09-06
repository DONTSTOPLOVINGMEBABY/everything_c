#include <stdio.h> 


union {
	struct {
		int type ; 
	} n ; 
	
	struct { 
		int type ; 
		int intnode; 
	} ni ; 

	struct {
		int type ; 
		double doubledoublenode ; 
	} nf ; 

} u ; 

// accessed in the following ways: 
// u.nf.type = 1 ; 
// u.nf.doublenode = 3.14 ; 

int main(){
	
	puts("A program that illustrates how unions in c are structured in code.") ; 

	return 0 ; 
} 
