#include <stdio.h>
#include <string.h>



void general_memset_examples(void) ; 
void pretty_print_buffer( void *buf, size_t size ) ;   

void *cdefinedMemset( void *dest, int val, size_t n) {
	unsigned char *ptr = (unsigned char*)dest ; 		// Creates a pointer to beginning of array... This doesn't mean that the entire array is converted to type unsigned char though. So if its an integer array originally, it's going to be much larger and may possible overwrite given the way it's written right now?? 
	

	size_t cpyN = n ; 

	while (n-- > 0) 
		*ptr++ = (unsigned char)val; 
		
	pretty_print_buffer( dest, cpyN ) ; 
	return dest ; 						// Returns the original position of the array located at destinition to the caller. 
} 


void *for_loop_memset( void *dest, int val, size_t n) {
	unsigned char *ptr = (unsigned char*)dest ; 
	
	for (size_t i = 0 ;  i < n ; ++i) {

		*(ptr + i) = val ; 
	}
		
		pretty_print_buffer( ptr, n ) ;  
		return dest ; 
}



int main(){



	char buffer3[100] ;  
	cdefinedMemset(buffer3, '!', sizeof(buffer3) * sizeof(char)) ;  


	char buffer4[10] ; 
	for_loop_memset( buffer4, 'Q', sizeof(buffer4) * sizeof(char)) ; 


	return 0 ; 



}




void pretty_print_buffer( void *buf, size_t size) {
	unsigned char *ptr = (unsigned char*)buf ; 
	for (size_t i = 0 ; i < size ; ++i) {
		printf("%c ", *(ptr + i)) ;
	}

	puts("A space for your convenience") ; 

}



void general_memset_examples(void) {


	char buffer1[10] ; 
	
	memset(buffer1, '!', sizeof(char) * 10) ; 

	int buffer2[100] ;

	memset(buffer2, 1234, sizeof(int) * 100) ; 	// Wont work!!!! Can only do 0s with integer arrays
	
	memset(buffer2, 0, sizeof(int) * 100) ; 

	for (int i = 0 ; i < sizeof(buffer2) / sizeof(int) ; i++)
		printf("%d ", buffer2[i]) ; 

	puts("A space for your convenience") ; 	


} 


