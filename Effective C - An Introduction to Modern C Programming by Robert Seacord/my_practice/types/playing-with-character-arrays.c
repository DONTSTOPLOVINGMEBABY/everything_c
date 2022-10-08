#include <stdio.h> 
#include <string.h> 


void reverse_string( char *character_string ) {

	int length = strlen(character_string) ; 
	int middle = length / 2 ; 
	char temp ; 
	for (int i = 0 ; i < middle ; i++) {
		temp = character_string[i] ; 
		character_string[i] = character_string[length - i - 1] ; 
		character_string[length - i - 1] ; 
	}
	

}


int main() {

	char character_string[] = "An abnormally long character string" ; 
	size_t length_of_array = sizeof(character_string) ; 
	char a_simpler_character_string[] = "Henry" ; 
	size_t length_of_second_array = sizeof(a_simpler_character_string);
	

	printf("%ld\n", length_of_array) ; 
	printf("%s\n", character_string) ; 


	puts("A more complex way of doing it") ; 
	for (int ctr = 0 ; ctr < length_of_array ; ctr++){ 
		printf("%c", character_string[ctr]) ; } puts("") ; 
	

	reverse_string(character_string) ; 

	printf("%s\n", character_string) ; 
	return 0 ;

}
