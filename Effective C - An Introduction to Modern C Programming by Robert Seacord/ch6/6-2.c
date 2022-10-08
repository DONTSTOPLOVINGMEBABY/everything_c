#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 



/* Believed to result in undefined behavior because malloc doesn't intialize values into memory when it allocates. Typically a character array of 16 bytes would be initialized with all zeros, so you can fill the first 15 bytes with characters and don't have to null-terminate the 16th because the 0 already acts as the null character. 
 */


int main(void) {
	char *str = (char *)malloc(16) ; 
	if (str) {
		strncpy(str, "123456789abcedf", 15) ; 
		printf("str= %s\n", str) ; 		 
		free(str) ; 
		return EXIT_SUCCESS ; 
	} 
	return EXIT_FAILURE ; 
} 


