#include <stdio.h> 


void func(int arr[5]) ; 

int main(void) {
	unsigned int i = 0 ; 
	unsigned int j = 0 ; 

	int arr[3][5] ;		// Arr is an array of three elements, each with an array of five elements of type int  
	func(arr[i]) ; i	// Break 1 
	int x = arr[i][j] ; 	// Break 2 
	
	return 0 ;
} 
	

	/* 
	 * 1. Arr is converted to a pointer to the initial array of five elements of type int starting at arr[1] 
	 * 2. i is scaled to the type of arr by multiplying i by the size of one array of five int objects
	 * 3. The results from steps 1 and 2 are added
	 *
	 * 4. Indirection is applied to the result to produce an array of five elements of type int. 










// I'm not really sure what this is suppose to be doing 
// I want to be able to pass an array to a function and assign values to every element in that array
// It definitely will involve pointers of some kind 
