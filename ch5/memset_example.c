#include <stdio.h>
#include <string.h>



void *cdefinedMemset( void *dest, int val, size_t n) {
	unsigned char *ptr = (unsigned char*)dest ; 		// Creates a pointer to beginning of array... This doesn't mean that the entire array is converted to type unsigned char though. So if its an integer array originally, it's going to be much larger and may possible overwrite given the way it's written right now?? 
							

	while (n-- > 0) 
		*ptr++ = (unsigned char)val; 
	return dest ; 						// Returns the original position of the array located at destinition to the caller. 
} 






int main(){


/*

	char buffer1[10] ; 
	
	memset(buffer1, '!', sizeof(char) * 10) ; 

	int buffer2[100] ;

	memset(buffer2, 1234, sizeof(int) * 100) ; 	// Wont work!!!! Can only do 0s with integer arrays
	
	memset(buffer2, 0, sizeof(int) * 100) ; 

	for (int i = 0 ; i < sizeof(buffer2) / sizeof(int) ; i++)
		printf("%d ", buffer2[i]) ; 

	puts("A space for your convenience") ; 	

*/

	char buffer3[100] ;  
	cdefinedMemset(buffer3, '!', sizeof(char) * 100) ;  


	for (int i = 0 ; i < sizeof(buffer3) / sizeof(char) ; i++)
		printf("%c ", buffer3[i]) ; 

	
	puts("A space for your convenience") ; 	


	
	return 0 ; 



}

