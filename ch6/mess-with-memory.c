#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include <unistd.h> 
#define N 100
#define bigN 10000 

typedef struct {
	char car_type[20] ;
	float price ; 
	int year_made ; 
} car  ; 



typedef struct { 
	char a_big_buffer[N] ; 
} big_buf ; 




int main()

{



	char the_first_string[100] = "Hello! So good to see you in the old Florida! Nice to have you. This is random and dedicated to you" ; 


	big_buf one_time ;
	strcpy(one_time.a_big_buffer, the_first_string) ; 

	big_buf list_of_buffs[bigN] ; 


	for (int i = 0 ; i < bigN ; i++) { 
	       list_of_buffs[i] = one_time ; 
	} 	       

	
	for (int i = 0 ; i < bigN ; i++) {
		printf("%s\n", list_of_buffs[i].a_big_buffer) ; 
	} 

	
	
	puts("Finished") ; 


/* 

	big_buf first = {"Hello! So good to see you in the old Florida! Nice to have you. This is random and dedicated to you"} ; 

	big_buf list_of_buffs[bigN] ; 
	
	list_of_buffs[0] = first ;

	printf("%s\n", list_of_buffs[0].a_big_buffer) ; 
*/ 



	// First figure out how to store an array of structs
	// create hundreds and print them all out
	// then watch the effect on memory as the arrays get very big 
	//


	return 0 ; 
} 
