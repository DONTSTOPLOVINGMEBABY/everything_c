#include <stdio.h> 



int main() { 

	char str[11] ; 
	for (unsigned int i = 0 ; i < 10 ; ++i) { 
		str[i] = '0' + i ; 	// str is converted to a pointer to the first member of the array 
	}

	str[10] = '\0' ; 

	printf("str: %s\n", str) ; 

	return 0 ; 

} 
