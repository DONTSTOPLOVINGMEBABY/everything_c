#include <stdio.h> 


void set_array_equal_to_temp ( int *array, int length) {
	int temp[3] = {1, 2, 3} ; 
	array = temp ;	// sets the array's pointer to the beginning of temp but doesn't actually change the array in the caller function.  
} 





void main() {
	
	int main_array[] = {7, 8, 9} ; 
	int length_main_array = sizeof(main_array) / sizeof(main_array[0]) ; 

	puts("printing main_array variable before function call") ; 
	for (int i = 0 ; i < length_main_array ; i++){
		printf("%d ", main_array[i]) ;} puts("") ; 

	
	set_array_equal_to_temp(main_array, length_main_array) ; 
	
	puts("Printing main_array after set_array_equal_to_temp call") ; 
	for (int i = 0 ; i < length_main_array ; i++){
		printf("%d ", main_array[i]) ;} puts("") ; 






	puts("Done!") ; 
		


}
