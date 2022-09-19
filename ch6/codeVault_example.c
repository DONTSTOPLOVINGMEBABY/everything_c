#include <stdio.h>
#include <stdlib.h> 



int *arr ; 
size_t arrSize = 256 ; 




int main() {

	arr = calloc(arrSize, sizeof(int)) ; 
	int oldsize = arrSize ; 


	for (int i = 0 ; i < arrSize ; i++)
		arr[i] = i ; 

	for (int i = 0 ; i < arrSize ; i++) {  
		printf("%d ", arr[i]) ; } puts("") ; 
	
	arrSize *= 2 ; 	// update array size for realloc call so it matches current array after updates 
	
	arr = realloc(arr, arrSize * sizeof(int)) ; 
		

	for (int i = oldsize ; i < arrSize ; i++)
		arr[i] = i ; 

	for (int i = oldsize ; i < arrSize ; i++) {  
		printf("%d ", arr[i]) ; } puts("") ; 
	




	free(arr) ; 
	arr= NULL ;
	return 0 ; 

}
