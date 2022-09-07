#include <stdio.h> 
#include <limits.h> 
#include <stdbool.h> 

void diff_sign_diff_rank () {
	puts("An example of implicit conversion") ; 
	
	unsigned int ui = UINT_MAX ; 
	signed char c = -1 ; 

	printf("Int: %lu, Char: %lu\n", sizeof(ui), sizeof(c)) ; 

	if (c == ui) {
		puts("-1 equals 4,294,967,295") ; 
		printf("Int: %lu, Char: %lu\n", sizeof(ui), sizeof(c)) ; 
		puts("So... This means that the conversion only happens in the conditional statement. Signed char has a lower integer conversion rank than int or unsigned int, so signed char is promoted to signed int. Since the operands in the == operation have different signedness and equal rank, the integer with the signed integer type is converted to the type with the unsigned integer type.") ; 

	}
}


void example2() {

	bool b = true ;
	char c = 'X' ; 
	float d = 1234.5 ; 
	int i = 123 ; 
	short s = 98 ; 

	printf("bool + char is char:     %c\n", b + c);
    	printf("int * short is int:      %d\n", i * s);
    	printf("float * char is float:   %f\n", d * c);


	//bool promoted to char
	c = c + b ; 

	//char promoted to float
	d = d + c ; 

	b = false ; 

	
	//float demoted to bool 	

	b = -d ; 
	
	printf("\nAfter execution \n");
    	printf("char + true:     %c\n", c);
    	printf("float + char:    %f\n", d);
    	printf("bool = -float:   %d\n", b);
  

	// https://www.geeksforgeeks.org/implicit-type-conversion-in-c-with-examples/

} 






int main() {

	//diff_sign_diff_rank() ; 

	puts("Currently this has two examples") ; 

}
