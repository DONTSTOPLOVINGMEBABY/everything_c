#include <stdio.h> 


int main(){
	
	int m[2] = {1, 2} ; 

	int *pi; int j = 0 ; 
	int ctr = 0 ; 
	for (pi = &m[0] ; pi < &m[2] ; ++pi) {
		j += *pi ;
	       printf("%d\n", m[j]) ; 	
	}
	printf("%d\n", j) ; 



}
