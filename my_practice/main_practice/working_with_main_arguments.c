#include <stdio.h>



int main(int argc, char *argv[], char* envp[]){


	int i ; 
	for ( i = 0 ; i < argc ; i++) {
		printf("%s\n", argv[i]) ; 
	} 


	for ( i = 0 ; envp[i] != NULL; i++) {
		printf("%s\n", envp[i]) ; 
	} 


	// If you need the environment variables, then iterate over the variables split at the equals sign or a different delimter 
	// and the left side will be your key and the right your value



	return 0 ; 

} 

