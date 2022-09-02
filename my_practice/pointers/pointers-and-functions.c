#include <stdio.h>
#include <string.h> 

void squareNumber( int *x ) ; 


void addArray( int b[] , int length, int *sum ) ; 



void main( int argc, char *argv[] ) {


	int number = 4 ; 
	squareNumber(&number) ; 
	printf("number : %d\n", number) ; 


	char str[] = "Henry"  ; 	
	size_t strlen = sizeof(str) ; 



}



void squareNumber( int *x ) {
	*x = *x * *x ; 	
} 

